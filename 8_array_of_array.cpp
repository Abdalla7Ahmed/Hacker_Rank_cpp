/*
Sample Input

2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
Sample Output

5
9
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    std::vector<std::vector<int>> all_array;
    
    int n, q;
    cin >> n >> q;
    
    for (int i = 0; i < n; i++) {  // This should iterate n times
        std::vector<int> tmp;
        int size_of_single_array;
        std::cin >> size_of_single_array;
        for (int j = 0; j < size_of_single_array; j++) {
            int t;
            std::cin >> t;
            tmp.push_back(t);
        }
        all_array.push_back(tmp);
    } 
    
    int n1, i1;
    std::vector<int> result;
    for (int i = 0; i < q; i++) {  // This should iterate q times
        std::cin >> n1 >> i1;
        result.push_back(all_array[n1][i1]);        
    }
    
    for (auto i : result) {
        std::cout << i << std::endl;
    }

    return 0;
}
