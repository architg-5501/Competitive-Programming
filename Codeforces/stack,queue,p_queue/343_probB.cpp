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

    ll n = t.size();
    stack<int> s;
    for (ll i = 0; i < n; i++)
    {
        if (s.empty())
        {
            s.push(t[i]);
        }
        else
        {
            if (s.top() == t[i])
            {
                s.pop();
            }
            else
            {
                s.push(t[i]);
            }
        }
    }

    if (s.empty())
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}