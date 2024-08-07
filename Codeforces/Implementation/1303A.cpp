#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <string>
#include <climits>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        string s;
        cin >> s;
        int ans = 0;
        int start = -1;
        int end = 0;
        int cnt = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                cnt++;
                end = i;
            }
            if (start == -1 && s[i] == '1')
                start = i;
        }

        if (start != -1)
            cout << end - start + 1 - cnt << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}