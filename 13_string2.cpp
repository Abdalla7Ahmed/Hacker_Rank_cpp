#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
constexpr char delimiter = ',';
vector<int> parseInts(string str)
{
    // Complete this function
    std::vector<int> numbers;
    std::stringstream ss(str);
    std::string n;
    while (std::getline(ss, n, delimiter))
    {
        int number = stoi(n);
        numbers.push_back(number);
    }

    return numbers;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}
