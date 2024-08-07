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
    for (int i = 0; i < 7; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }

    int i = 0;
    while (n > 0)
    {
        i = i % 7;
        n = n - vec[i];
        i++;
    }

    cout << i << endl;
    return 0;
}