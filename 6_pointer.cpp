#include <iostream>

void update(int *a,int *b) {
    int a1{*a};
    int b1{*b};
    *a = a1 + b1 ;
    *b = std::abs(a1-b1);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    std::cin>>a;
    std::cin>>b;
    
    update(pa,pb);
    
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    return 0;
}
