#include <iostream>
// #include <bits/stdc++.h>
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
        int n, x, a, y;
        int sum = 0;
        cin >> n >> x;
        vector<int> g1;
        for (size_t i = 0; i < n - 1; i++)
        {
            cin >> a;
            g1.push_back(a);
        }

        // sum = accumulate(g1.begin(), g1.end(), 0);

        y = ((n * x) - sum);
        if (y > 0)
        {
            cout << y << "\n";
        }
        else
        {
            cout << "0"
                 << "\n";
        }
    }
    return 0;
}