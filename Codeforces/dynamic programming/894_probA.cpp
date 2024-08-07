#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <string>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

#define ll long long
#define pll pair<ll, ll>

ll solve(string &s, ll ind, ll n, ll a, ll q, vector<vector<vector<ll>>> &dp)
{
    if (a < 0 || q < 0)
        return 0;

    if (ind == n)
    {
        if (a == 0 && q == 0)
            return 1;
        return 0;
    }

    if (dp[ind][a][q] != -1)
        return dp[ind][a][q];
    ll take = 0;
    if (s[ind] == 'Q')
    {
        take = solve(s, ind + 1, n, a, q - 1, dp);
        ll notTake = solve(s, ind + 1, n, a, q, dp);

        return dp[ind][a][q] = take + notTake;
    }
    else if (s[ind] == 'A')
    {
        if (q == a)
            take = solve(s, ind + 1, n, a - 1, q, dp);
        ll notTake = solve(s, ind + 1, n, a, q, dp);

        return dp[ind][a][q] = take + notTake;
    }
    else
    {
        return dp[ind][a][q] = solve(s, ind + 1, n, a, q, dp);
    }
}

int main()
{
    string s;
    cin >> s;

    ll n = s.size();
    ll a = 1;
    ll q = 2;
    vector<vector<vector<ll>>> dp(n, vector<vector<ll>>(a + 1, vector<ll>(q + 1, -1)));
    ll ans = solve(s, 0 * 1ll, n, 1, 2, dp);
    cout << ans << endl;
    return 0;
}