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

    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        ans[vec[i] - 1] = i + 1;
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}