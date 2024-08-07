#include <iostream>
#include <vector>
#include <numeric> 
using namespace std;

#define ll long long


ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

void solve(const vector<ll>& vec) {
    ll n = vec.size();
    ll z = 1;

    for (ll i = 0; i < n; i++) {
        z = lcm(z, vec[i]);
    
        if (z > LLONG_MAX / vec[i]) {
            cout << -1 << endl;
            return;
        }
    }

    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        sum += z / vec[i];
    }

    if (sum < z) {
        for (ll i = 0; i < n; i++) {
            cout << z / vec[i] << " ";
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll k;
        cin >> k;
        vector<ll> vec(k);
        for (ll i = 0; i < k; i++) {
            cin >> vec[i];
        }
        solve(vec);
    }
    return 0;
}
