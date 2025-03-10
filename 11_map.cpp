#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>

constexpr int NOT_FOUND = 0 ;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    std::map<std::string,int> student;
    int n;
    std::cin>>n;
    for(int i = 0 ; i < n ; i ++)
    {
        int ch,mark;
        std::string student_name;
        std::cin>>ch;
        if(ch == 1)
        {
            std::cin>>student_name;
            std::cin>>mark;
            std::map<std::string,int>::iterator it = student.find(student_name);
            if(it != student.end())
            {
                student[student_name] += mark;
            }
            else
            {
                student.insert(make_pair(student_name,mark));
            }
        }
        else if (ch == 2)
        {
            std::string student_name;
            std::cin>>student_name;
            std::map<std::string,int>::iterator it = student.find(student_name);
            if(it != student.end())
            {
                student.erase(student_name);
            }
            else
            {
                // do nothing
            }
        }
        else if (ch == 3)
        {
            std::string student_name;
            std::cin>>student_name;
            std::map<std::string,int>::iterator it = student.find(student_name);
            if(it != student.end())
            {
                std::cout<<student[student_name]<<std::endl;
            }
            else
            {
                std::cout<<NOT_FOUND<<std::endl;
            }
        }
    } 
    return 0;
}





