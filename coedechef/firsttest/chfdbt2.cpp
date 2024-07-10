#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

long long int log_a_to_base_b(long long int a, long long int b)
{
    return log2(a) / log2(b);
}
int main()
{
    long long int t;
    cin >> t;

    while (t-- > 0)
    {
        // write your code here
        long long int n;
        cin >> n;
        long long int d = 0;

        if (n == 1 || n == 2)
        {
            cout << 1 << "\n";
        }
        else
        {
            d = 1;
            for (size_t i = 3; i <= n; i += 2)
            {
                d += log_a_to_base_b(n / i, 2);
            }

            cout << n - d << "\n";
        }
    }
    return 0;
}