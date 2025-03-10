#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    std::vector<int> vector;
    int number_of_elements;
    int sl1,sl21,sl22;
    std::cin>>number_of_elements;
    for(int i=0;i<number_of_elements;i++)
    {
        int tmp;
        std::cin>>tmp;
        vector.push_back(tmp);
    }
    std::cin>>sl1;
    std::cin>>sl21>>sl22;
    
    vector.erase(vector.begin()+sl1-1);
    vector.erase(vector.begin()+sl21-1,vector.begin()+sl22-1);
    
    std::cout<<vector.size()<<"\n";
    for(auto i : vector)
    {
        std::cout<<i<<" ";
    }
    
    return 0;
}
