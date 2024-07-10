#include <iostream>
#include <numeric>
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
        long long int n, x, a, sum = 0;
        cin >> n >> x;
        vector<long long int> g1;

        for (size_t i = 0; i < n; i++)
        {
            cin >> a;
            g1.push_back(a);
        }
        sum = accumulate(g1.begin(), g1.end(), 0);

        if (g1.size() == x)
        {
            cout << n << "\n";
        }

        else if (n == 1)
        {
            cout << x / g1[0] << "\n";
        }
        else if (x == sum)
        {
            cout << n << "\n";
        }
        else if (x <= sum)
        {
            cout << n << "\n";
        }
        else if (x > sum)
        {
            cout << (x / sum) + 1 << "\n";
        }
    }
    return 0;
}