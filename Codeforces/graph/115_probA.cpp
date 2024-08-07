#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include <string>
#include <climits>
#include <stack>
#include <queue>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> vec(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        vec[i] = (a);
    }
    ll ans = 1;
    for (ll i = 1; i <= n; i++)
    {
        ll dep = 0;
        ll node = i;

        while (node != -1)
        {
            dep++;
            node = vec[node];
        }
        ans = max(ans, dep);
    }

    cout << ans << endl;
    return 0;
}