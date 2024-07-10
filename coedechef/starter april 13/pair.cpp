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
        long long int a;
        long long int c = 0, d = 0;
        cin >> n;

        for (size_t i = 0; i < n; i++)
        {
            cin >> a;
            if (a > 0)
                c++;
            else if (a < 0)
                d++;
        }

                long long int l = ((c - 1) * (c)) + ((d - 1) * (d));
        cout << (l) / 2 << "\n";
    }
    return 0;
}