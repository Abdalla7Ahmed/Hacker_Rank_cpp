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
    int n1,n2;
    std::cin>> n1 ;
    std::cin >> n2;
    for(int i = n1 ; i <= n2 ; i ++)
    {
        if (i > 9)
        {
            if(i%2 == 0 )
            {
                std::cout<<"even"<<std::endl;
            }
            else
            {
                std::cout<<"odd"<<std::endl;
            }
        }
        else
        {
            std::cout<<numbersInEnglish[i-1]<<std::endl;
        }
    }

    return 0;
}
