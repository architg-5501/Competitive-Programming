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
    string t;
    cin >> t;
    ll nb, ns, nc;
    cin >> nb >> ns >> nc;
    ll pb, ps, pc;
    cin >> pb >> ps >> pc;
    ll r;
    cin >> r;
    ll b = 0;
    ll s = 0;
    ll c = 0;
    ll n = t.size();
    for (ll i = 0; i < n; i++)
    {
        if (t[i] == 'B')
            b++;
        else if (t[i] == 'S')
            s++;
        else
            c++;
    }

    ll l = 0;
    ll h = r + 200;
    ll res = 0;
    while (l <= h)
    {
        ll mid = ((h - l) / 2) + l;
        ll bun = 0, sause = 0, cheese = 0;
        if (b != 0)
            bun = max(0 * 1ll, (mid * b) - nb);
        if (s != 0)
            sause = max(0 * 1ll, (mid * s) - ns);
        if (c != 0)
            cheese = max(0 * 1ll, (mid * c) - nc);

        ll price = bun * pb + sause * ps + cheese * pc;

        if (price <= r)
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

// int bruteforce(){
//     for(ll i=0;i<n;i++){
//         if(t[i]=='B') b++;
//         else if(t[i]=='S') s++;
//         else c++;
//     }

//     ll cnt = 0;
//     while(1){
//         if(b!=0){
//         if(nb>=b){
//             nb -= b;
//         }
//         else{
//              ll diff = r - pb*(abs(nb - b));
//             if(diff<0){
//                 break;
//             }
//             else{
//               nb=0;
//                 r = diff;
//             }
//         }}
//         if(s!=0){
//             if(ns>=s){
//                 ns -= s;
//             }
//             else{
//                 ll diff = r - ps*(abs(ns - s));
//                 if(diff<0){
//                     break;
//                 }
//                 else{
//                   ns=0;
//                     r = diff;
//                 }
//             }
//         }
//         if(c!=0){
//             if(nc>=c){
//                 nc -= c;
//             }
//             else{
//                 ll diff = r - pc*(abs(nc - c));
//                 if(diff<0){
//                     break;
//                 }
//                 else{
//                   nc=0;
//                     r = diff;
//                 }
//             }
//         }
//         cnt++;
//     }
//     cout<<cnt;
//     return cnt;
// }
