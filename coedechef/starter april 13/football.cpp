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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (c >= a && d >= b)
        {
            cout << "POSSIBLE \n";
        }
        else
        {
            cout << "IMPOSSIBLE \n";
        }
    }
    return 0;
}