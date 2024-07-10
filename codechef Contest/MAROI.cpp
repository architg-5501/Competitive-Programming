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
        int x;
        cin >> x;

        if (x % 3 == 0)
        {
            cout << "NORMAL \n";
        }

        else if (x % 3 == 1)
        {
            cout << "HUGE \n";
        }

        else
        {
            cout << "SMALL \n";
        }
    }
    return 0;
}