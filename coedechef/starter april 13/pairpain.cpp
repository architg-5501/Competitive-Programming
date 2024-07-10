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
        long long int N, x;
        cin >> N;

        vector<long long int> g1;
        {
            for (size_t i = 0; i < N; i++)
            {
                cin >> x;
                g1.push_back(x);
            }
        }
        long long int i, j;
        long long int c = 0;
        long long int ans = 0;

        int flag = 0;
        vector<long long int> h1;
        h1 = g1;
        g1.erase(unique(g1.begin(), g1.end()), g1.end());
        N = g1.size();

        for (i = 0; i < N; i++)
        {

            if (g1[i] == 1)
            {
                ans = N - 1;
                flag = 1;
            }
        }
        long long int two = 0;
        for (auto &&it : h1)
            if (it == 2)
                two++;
        if (two > 1)
            ans = ans + 1;
        long long int one = 0;
        for (auto &&it : h1)
            if (it == 1)
                one++;
        if (one > 1)
            ans = ans + 1;

        cout << ans << "\n";
    }
    return 0;
}