#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(vector<ll>& vec, ll k) {
    const ll mod = 1e9 + 7;
    ll sum = 0;
    ll curr = 0;
    ll maxi = 0;

    for (auto it : vec) {
        sum += it;
        curr += it;
        maxi = max(maxi, curr);
        if (curr < 0) curr = 0;
    }

    sum = (sum % mod + mod) % mod;
    maxi = (maxi) % mod;
    
    ll t = 1;
    for (ll i = 0; i < k; i++) {
        t = (t * 2) % mod;
    }

    ll ans = ((maxi*t) - maxi + sum + mod) % mod;
    return ans;
    
}

signed main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        ll ans = solve(vec, k);
        cout << ans << endl;
    }
    return 0;
}
