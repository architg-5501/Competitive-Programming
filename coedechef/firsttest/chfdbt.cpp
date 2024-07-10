#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

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

        if (n == 1)
        {
            cout << 1 << "\n";
        }
        else
        {
            for (size_t i = 2; i <= n; i += 4)
            {
                for (size_t j = i; j <= n; j *= 2)
                {
                    d++;
                }
            }

            cout << n - d << "\n";
        }
    }
    return 0;
}