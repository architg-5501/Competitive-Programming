#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> vec;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);

    sort(vec.begin(), vec.end());
    int ans = abs(vec[1] - vec[0]) + abs(vec[1] - vec[2]);
    cout << ans << endl;
    return 0;
}