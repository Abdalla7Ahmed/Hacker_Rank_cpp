#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int count;
    std::cin >> count;
    std::vector<int> V;
    for (int i = 0; i < count; i++)
    {
        int tmp;
        std::cin >> tmp;
        V.push_back(tmp);
    }

    std::sort(V.begin(), V.end());
    for (const auto v : V)
    {
        std::cout << v << ' ';
    }
    return 0;
}
