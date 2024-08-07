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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    string ans;
    for (int i = 0; i < n; i += cnt)
    {
        ans.push_back(s[i]);
        cnt++;
    }
    cout << ans << endl;
    return 0;
}