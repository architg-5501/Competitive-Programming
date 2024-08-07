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
    ll n, m;
    cin >> n >> m;

    if (n >= m)
    {
        cout << n - m << endl;
        return 0;
    }

    ll cnt = 0;
    while (m > n)
    {
        cnt++;
        if (m % 2)
        {
            m++;
        }
        else
        {
            m /= 2;
        }
    }

    cnt += (n - m);

    cout << cnt << endl;
    return 0;
}