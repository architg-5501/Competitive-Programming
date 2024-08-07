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
ll solve(ll n){
    if(n==0) return 0;
    
    ll sum = n*(n+1);

    return sum/2;
    
}
int main()
{
    ll ho, s;
    cin >> ho >> s;
    if (ho == 0 || ho==1)
    {
        cout << "0" << endl;
        return 0;
    }
    ll res = -1;
    ll l = 1;
    ll h = s-1;

    while (l <= h)
    {
        ll mid = ((h - l) / 2) + l;

        ll sum = s-mid;
        
        ll temp = solve(sum); 
        ll temp2 = solve(s);

        ll val = temp2-temp-(mid-1);
        if (val >= ho)
        {
            res = mid ;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << res << endl;
    return 0;
}