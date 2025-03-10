#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    std::string numbersInEnglish[] = {
        "one", "two", "three", "four", "five", 
        "six", "seven", "eight", "nine"
    };
    int n;
    std::cin>> n ;
    if(n > 9 )
    {
        std::cout<<"Greater than 9"<<std::endl;
    }
    else
    {
        std::cout<<numbersInEnglish[n-1]<<std::endl;
    }
    return 0;
}

