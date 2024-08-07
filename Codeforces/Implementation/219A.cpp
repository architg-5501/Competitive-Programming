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
    int k;
    cin >> k;
    string s;
    cin >> s;
    int n = s.size();
    vector<int> freq(26);
    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++;
    }

    int maxi = *max_element(freq.begin(), freq.end());
    if (maxi % k != 0)
    {
        cout << -1 << endl;
        return 0;
    }
    string a;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0 && freq[i] % k != 0)
        {
            cout << -1 << endl;
            return 0;
        }
        if (freq[i] != 0)
        {
            int f = freq[i] / k;
            while (f--)
                a += (i + 'a');
        }
    }
    string t = a;
    while (k > 1)
    {
        a += t;
        k--;
    }
    cout << a << endl;
    return 0;
}