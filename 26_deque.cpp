#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void printKMax(int arr[], int n, int k)
{
    // Write your code here.

    std::deque<int> deqmax;
    int max{0};
    for (int i = 0; i <= n - k; i++)
    {
        for (int j = i; j < k + i; j++)
        {
            if (max < arr[j])
                max = arr[j];
        }
        deqmax.push_back(max);
        max = 0;
    }

    for (const auto &m : deqmax)
    {
        std::cout << m << ' ';
    }
    std::cout << std::endl;
}

int main()
{

    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        int i;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}