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
        int n;
        cin >> n;
        vector<pair<int, int>> res;
        vector<int> vec;
        for (int i = 1; i <= n; i++)
            vec.push_back(i);
        while (vec.size() > 1)
        {
            int a = vec.back();

            vec.pop_back();

            int b = vec.back();
            vec.pop_back();

            res.push_back({a, b});
            int rnd = (a + b + 1) / 2;
            vec.push_back(rnd);
        }
        cout << vec.back() << endl;
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i].first << " " << res[i].second << endl;
        }
    }
    return 0;
}