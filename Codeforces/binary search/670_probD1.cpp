#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

#define ll long long
int main()
{
    ll t, r;
    cin >> t >> r;

    vector<ll> needed;
    vector<ll> has;

    for (ll i = 0; i < t; i++)
    {
        ll a;
        cin >> a;
        needed.push_back(a);
    }

    for (ll i = 0; i < t; i++)
    {
        ll a;
        cin >> a;
        has.push_back(a);
    }

    ll l = 0;
    ll h = 1e15;

    ll res = 0;
    while (l <= h)
    {

        ll mid = ((h - l) / 2) + l;

        ll bake = 0;

        for (ll i = 0; i < t; i++)
        {
            ll temp = (mid * needed[i]) - has[i];
            temp = max(0 * 1ll, temp);
            bake += temp;
        }

        if (bake <= r)
        {
            res = mid;
            l = mid + 1;
        }

        else
        {
            h = mid - 1;
        }
    }

    cout << res << endl;
    return 0;
}