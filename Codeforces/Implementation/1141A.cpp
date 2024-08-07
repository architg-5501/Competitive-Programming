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
    int a, b;
    cin >> a >> b;

    if (b < a || b % a != 0)
    {
        cout << -1 << endl;
        return 0;
    }
    if (b == a)
    {
        cout << 0 << endl;
        return 0;
    }
    int n = b;
    int cnt = 0;
    b /= a;

    while (b % 6 == 0 && b != 1)
    {
        b /= 6;
        cnt += 2;
    }

    while (b % 3 == 0 && b != 1)
    {
        b /= 3;
        cnt += 1;
    }

    while (b % 2 == 0 && b != 1)
    {
        b /= 2;
        cnt++;
    }

    if (b == n || b != 1)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << cnt << endl;
    return 0;
}