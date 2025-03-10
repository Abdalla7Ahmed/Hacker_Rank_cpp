#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node
{
    Node *next;
    Node *prev;
    int value;
    int key;
    Node(Node *p, Node *n, int k, int val) : prev(p), next(n), key(k), value(val) {};
    Node(int k, int val) : prev(NULL), next(NULL), key(k), value(val) {};
};

class Cache
{

protected:
    map<int, Node *> mp;            // map the key to the node in the linked list
    int cp;                         // capacity
    Node *tail;                     // double linked list tail pointer
    Node *head;                     // double linked list head pointer
    virtual void set(int, int) = 0; // set function
    virtual int get(int) = 0;       // get function
};

class LRUCache : public Cache
{
public:
    LRUCache(int capacity)
    {
        cp = capacity;
        head = tail = nullptr;
    }

    void moveToHead(Node *node)
    {
        if (node == head)
            return; // Already at head, no need to move

        if (node == tail)
        {
            tail = tail->prev; // Move tail one step left
            if (tail)
                tail->next = nullptr;
        }
        else
        {
            node->prev->next = node->next;
            if (node->next)
                node->next->prev = node->prev;
        }

        node->next = head;
        node->prev = nullptr;

        if (head)
            head->prev = node;
        head = node;

        if (!tail)
            tail = head; // If only one node, head and tail are same
    }

    int get(int key)
    {
        if (mp.find(key) == mp.end())
            return -1; // Key not found

        Node *node = mp[key];
        moveToHead(node); // Move accessed node to head
        return node->value;
    }

    void set(int key, int value)
    {
        if (mp.find(key) != mp.end())
        {
            // Key exists, update value and move to head
            Node *node = mp[key];
            node->value = value;
            moveToHead(node);
        }
        else
        {
            // New key, create a node
            Node *newNode = new Node(key, value);
            mp[key] = newNode;

            if (!head)
            {
                // If cache is empty
                head = tail = newNode;
            }
            else
            {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }

            if (mp.size() > cp)
            {
                // Cache is full, remove LRU node
                mp.erase(tail->key);
                Node *temp = tail;
                tail = tail->prev;
                if (tail)
                    tail->next = nullptr;
                delete temp;
            }
        }
    }
};
int main()
{
    int n, capacity, i;
    cin >> n >> capacity;
    LRUCache l(capacity);
    for (i = 0; i < n; i++)
    {
        string command;
        cin >> command;
        if (command == "get")
        {
            int key;
            cin >> key;
            cout << l.get(key) << endl;
        }
        else if (command == "set")
        {
            int key, value;
            cin >> key >> value;
            l.set(key, value);
        }
    }
    return 0;
}
