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
    vector<int> vec;
    set<int> st;
    map<int, int> mp;
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        vec.push_back(i * 10);
        mp[i]++;
        st.insert(i * 10);
    }

    auto l1 = lower_bound(vec.begin(), vec.end(), 30) - vec.begin();
    auto u1 = upper_bound(vec.begin(), vec.end(), 30) - vec.begin();

    cout << vec[l1] << " " << vec[u1] << endl;

    auto l2 = st.lower_bound(35);
    auto u2 = st.upper_bound(30);

    cout << *l2 << " " << *u2 << endl;
}