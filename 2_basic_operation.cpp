#include <iostream>
#include <cstdio>
#include <iomanip>  // For setting the precision of floating-point output

using namespace std;

int main() {
    // Complete the code.
    int INT{};
    long int LINT{};
    char CHAR{};
    float FLOAT{};
    double DOUBLE{};
    
    
    cin>>INT>>LINT>>CHAR>>FLOAT>>DOUBLE;
    
    cout<<INT<<endl;
    cout<<LINT<<endl;
    cout<<CHAR<<endl;
    cout<<std::setprecision(10)<<FLOAT<<endl;
    cout << std::setprecision(20)<<DOUBLE<<endl;
    
    return 0;
}
