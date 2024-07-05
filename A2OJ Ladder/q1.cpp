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

    int sum = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    while (n)
    {
        int x, y, z;
        cin >> x >> y >> z;
        a += x;
        b += y;
        c += z;
        n--;
    }

    if (a == 0 && b == 0 && c == 0)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}