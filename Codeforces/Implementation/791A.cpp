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
    int a;
    int b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 1 << endl;
        return 0;
    }
    int cnt = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}