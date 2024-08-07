class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        multimap<double, vector<int>> mp;
        for (auto it : points)
        {
            double diff = sqrt((it[0] * it[0]) + (it[1] * it[1]));
            mp.insert({diff, {it[0], it[1]}});
        }
        vector<vector<int>> ans;
        int i = 0;
        for (auto it : mp)
        {
            if (i == k)
                break;
            i++;
            ans.push_back(it.second);
        }
        return ans;
    }
};