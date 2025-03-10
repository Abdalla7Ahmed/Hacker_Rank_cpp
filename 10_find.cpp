#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    std::vector<int> numbers;
    int number_of_elements;
    int number_of_queries;

    std::cin >> number_of_elements;
    for(int i = 0; i < number_of_elements; i++) {
        int tmp;
        std::cin >> tmp;
        numbers.push_back(tmp);
    }

    std::cin >> number_of_queries;
    for(int i = 0; i < number_of_queries; i++) {
        int query;
        std::cin >> query;
        
        // Use lower_bound directly on numbers vector
        auto it = std::lower_bound(numbers.begin(), numbers.end(), query);
        
        if (it != numbers.end() && *it == query) {
            // Found
            int index = std::distance(numbers.begin(), it) + 1; // +1 for 1-based index
            std::cout << "Yes " << index << std::endl;
        } else {
            // Not found
            int index = std::distance(numbers.begin(), it) + 1; // +1 for 1-based index
            std::cout << "No " << index << std::endl;
        }
    }

    return 0;
}
