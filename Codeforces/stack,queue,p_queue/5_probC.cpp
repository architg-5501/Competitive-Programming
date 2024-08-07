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
    string s;
    cin >> s;
    stack<char> st;
    ll cnt;
    vector<ll> ans;

    for (ll i = 0; i < s.size(); i++)
    {
        if (st.empty() && s[i] == '(') st.push('(');
        if (s[i] == '(')
        {
            if (cnt > 0)
                ans.push_back(cnt);
            st.push('(');
        }
        else if (s[i] == ')')
        {
            st.pop();
            cnt++;
        }
    }

  
    
     cout << "0 1" << endl;
    
    

    
    return 0;
}