#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    std::vector<int> numbers;
    int n,a;
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        std::cin>>a;
        numbers.push_back(a);
    }
    
    for(int i=0;i<n;i++)
    {
        std::cout<<numbers.back()<<" ";
        numbers.pop_back();
    }
    return 0;
}
