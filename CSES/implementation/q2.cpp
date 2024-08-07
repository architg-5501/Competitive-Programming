#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> mergeIntervals;
    sort(intervals.begin(), intervals.end());

    if (intervals.size() == 0)
    {
        return mergeIntervals;
    }

    vector<int> tempIntervals = intervals[0];
    for (auto it : intervals)
    {
        if (it[0] <= tempIntervals[1])
        {
            tempIntervals[1] = max(it[1], tempIntervals[1]);
        }
        else
        {
            mergeIntervals.push_back(tempIntervals);
            tempIntervals = it;
        }
    }
    mergeIntervals.push_back(tempIntervals);
    return mergeIntervals;
}

int main()
{

    int n;
    cin >> n;
    int k;
    cin >> k;

    vector<vector<int>> vec;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < k; j++)
        {
            int a;
            cin >> a;
            temp.push_back(a);
        }
        vec.push_back(temp);
    }
    vector<vector<int>> res = merge(vec);
    cout << res.size() << endl;
    return 0;
}