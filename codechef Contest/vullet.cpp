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
        int x, y, z, dif;
        cin >> x >> y >> z;
        dif = (y / x);
        if ((z - dif) >= 0)
        {
            cout << (z - dif) << "\n";
        }
        else if ((z - dif) < 0)
        {
            cout << 0 << "\n";
        }
    }
    return 0;
}