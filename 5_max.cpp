#include <iostream>
#include <cstdio>
#include<vector>
#include <bits/stdc++.h> 

using namespace std;


int max_of_four(int a, int b, int c, int d)
{
    std::vector<int> numbers;
    numbers.push_back(a);
    numbers.push_back(b);
    numbers.push_back(c);
    numbers.push_back(d);
    std::sort(numbers.begin(),numbers.end());
    return numbers[3];
    
    
}


int main() {
    int a, b, c, d;
    std::cin >>a;
    std::cin >>b;
    std::cin >>c;
    std::cin >>d;
    
    std::cout<<max_of_four(a,b,c,d)<<std::endl;
    

    
    
    return 0;
}
