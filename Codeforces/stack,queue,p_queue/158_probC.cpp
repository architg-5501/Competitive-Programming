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

//*************************************doubt**************************************

int main()
{
    ll t;
    cin >> t;

    string org = "/";
    while (t-- > 0)
    {
        string y;
        cin >> y;

        if (y == "pwd")
        {
            cout << org << endl;
        }
        else
        {
            string a;
            cin >> a;
            a += '/';
            ll n = a.size();
            string x;

            for (ll i = 0; i < n; i++)
            {

                x += a[i];

                if (a[i] == '/')
                {
                    if (x == "/")
                    {
                        org = x;
                    }
                    else if (x == "../")
                    {
                        ll j;
                        for (j = org.size() - 1; org[j - 1] != '/'; j--)
                            ;

                        org.resize(j);
                    }
                    else
                    {
                        org += x;
                    }
                    x = "";
                }
            }
        }
    }
    return 0;
}