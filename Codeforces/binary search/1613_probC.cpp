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
    ll t;
    cin >> t;
    while(t-->0){
    int n, he;
    cin >> n >> he;

    vector<int> vec(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    ll l = 1;
    ll h = he;
    ll ans = 0;
    while (l <= h)
    {
        ll mid = ((h - l) / 2) - l;
        ll prev = -1;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i != 0)
            {
                if (abs(vec[i] - vec[i - 1]) < mid)
                {
                    sum -= abs(mid - (vec[i] - vec[i - 1]));
                }
            }

            sum += (mid );
        }

        if (sum >= he)
        {
            ans = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    }
    return 0;
}