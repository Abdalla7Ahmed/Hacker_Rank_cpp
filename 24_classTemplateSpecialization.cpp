#include <iostream>
using namespace std;
enum class Fruit
{
    apple,
    orange,
    pear
};
enum class Color
{
    red,
    green,
    orange
};

template <typename T>
struct Traits;

// Define specializations for the Traits class template here.

template <>
struct Traits<Color>
{
    static string name(int index)
    {
        static const string colors[] = {"red", "green", "orange"};
        if (index >= 0 && index < 3)
            return colors[index];
        return "unknown";
    }
};

template <>
struct Traits<Fruit>
{
    static string name(int index)
    {
        static const string fruits[] = {"apple", "orange", "pear"};
        if (index >= 0 && index < 3)
            return fruits[index];
        return "unknown";
    }
};

int main()
{
    int t = 0;
    std::cin >> t;

    for (int i = 0; i != t; ++i)
    {
        int index1;
        std::cin >> index1;
        int index2;
        std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}
