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
    int a = 0;
    while (n-- > 0)
    {
        string t;
        cin >> t;
        if (t[0] == '+' || t[2] == '+')
            a++;
        else
            a--;
    }
    cout << a << endl;
    return 0;
}