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

    int t;
    cin >> t;

    string s;
    cin >> s;

    while (t)
    {
        for (int i = 0; i < (n - 1); i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {

                swap(s[i], s[i + 1]);
                i++;
            }
        }
        t--;
    }

    cout << s << endl;
    return 0;
}