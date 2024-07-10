#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
    long long int t;
    cin >> t;

    while (t-- > 0)
    {
        // write your code here
        string s, t, m;

        cin >> s >> t;
        for (size_t i = 0; i < 5; i++)
        {
            if (s[i] == t[i])
                m.push_back('G');
            else
            {
                m.push_back('B');
            }
        }
        cout << m << "\n";
    }
    return 0;
}