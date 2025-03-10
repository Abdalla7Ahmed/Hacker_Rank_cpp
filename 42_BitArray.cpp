#include <iostream>

using namespace std;

int main()
{
    unsigned int N, S, P, Q;
    cin >> N >> S >> P >> Q;

    unsigned int mod = 1U << 31;
    unsigned int slow = S % mod;
    unsigned int fast = (slow * P + Q) % mod;
    unsigned int count = 1;

    for (unsigned int i = 1; i < N; ++i)
    {
        if (slow == fast)
            break;

        count++;

        slow = (slow * P + Q) % mod;
        fast = (fast * P + Q) % mod;
        fast = (fast * P + Q) % mod;
    }

    cout << count << endl;
    return 0;
}
