#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    std::set<int> s;
    int n;
    std::cin>>n;
    for(int i = 0 ; i < n ; i ++)
    {
        int number,ch;
        std::cin>>ch >> number;
        if(ch == 1)
        {
            //Add an element  to the set.
            s.insert(number);
        }
        else if (ch == 2)
        {
            //Delete an element  from the set. (If the number  is not present in the set, then do nothing).
            std::set<int>::iterator it = s.find(number);
            if(it != s.end())
            {
                s.erase(number);
            }
            else
            {
                // do nothing
            }
        }
        else if (ch == 3)
        {
            // If the number  is present in the set, then print "Yes"(without quotes) 
            // else print "No"       (without quotes).
            std::set<int>::iterator it = s.find(number);
            if(it != s.end())
            {
                std::cout<<"Yes"<<std::endl;
            }
            else
            {
                std::cout<<"No"<<std::endl;
            
            }
        }
    } 
    return 0;
}



