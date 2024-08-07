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
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }

    int maxi = INT_MIN;
    int maxI = -1;
    int mini = INT_MAX;
    int minI = -1;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] > maxi)
        {
            maxi = vec[i];
            maxI = i;
        }
        if (vec[i] <= mini)
        {
            mini = vec[i];
            minI = i;
        }
    }
    int ans = 0;
    if (maxi == mini)
    {
        cout << 0 << endl;
        return 0;
    }
    ans = abs(maxI) + abs(n - 1 - minI);
    if (maxI > minI)
        ans--;
    cout << ans << endl;
    return 0;
}