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

// ll solve(vector<ll> &vec, ll ind, ll last, vector<ll> &dp)
// {
//     if (ind == vec.size())
//     {
//         return 0;
//     }
//     if (last != -1 && dp[ind] != -1)
//         return dp[ind];

//     int take = 0;
//     if (last == -1 || vec[ind] > last)
//     {
//         return dp[ind] = 1 + solve(vec, ind + 1, vec[ind], dp);
//     }

//     return dp[ind] = solve(vec, ind + 1, vec[ind], dp);
// }

int main()
{
    ll n;
    cin >> n;

    vector<ll> vec;
    vector<ll> dp(n, -1);

    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;

        vec.push_back(a);
    }

    // ll ans = solve(vec, 0, -1, dp);
    // cout << ans << endl;
    // return 0;

    ll ans = 1;
    ll cnt = 1;
    ll last = vec[0];
    for (int i = 1; i < n; i++)
    {
        if (vec[i] > last)
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else
        {
            ans = max(ans, cnt);
            cnt = 1;
        }
        last = vec[i];
    }
    cout << ans << endl;
    return 0;
}