#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    std::string s1,s2,s11,s22;
    std::cin>>s1>>s2;
    char ch1,ch2;
    std::cout<<s1.size()<< " " <<s2.size() <<"\n";
    std::cout << s1+s2 <<"\n";
    ch1 = s1[0];
    ch2 = s2[0];
    s1[0] = ch2;
    s2[0] = ch1;
    std::cout<<s1<<" "<<s2<<"\n";
    
    return 0;
}
