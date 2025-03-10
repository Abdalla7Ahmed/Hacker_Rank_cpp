#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while (T--)
    {
        double A;
        cin >> A;
        double B;
        cin >> B;
        double C;
        cin >> C;
        /* Enter your code here */
        cout << left << showbase << nouppercase
             << hex << (long long)A << endl;

        cout << setw(15) << setfill('_')
             << right << showpos << fixed << setprecision(2)
             << B << endl;

        cout << scientific << uppercase << setprecision(9)
             << noshowpos << C << endl;
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

        class Triangle
        {
        public:
            void triangle()
            {
                cout << "I am a triangle\n";
            }
        };

        class Isosceles : public Triangle
        {
        public:
            void isosceles()
            {
                cout << "I am an isosceles triangle\n";
            }
            // Write your code here.
        };

        int main()
        {
            Isosceles isc;
            isc.isosceles();
            isc.description();
            isc.triangle();
            return 0;
        }
    }
    return 0;
}