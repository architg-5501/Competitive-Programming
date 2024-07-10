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
        if (x >= 1 && x <= 4)
        {
            cout << "YES \n";
        }

        else
        {
            cout << "NO \n";
        }
    }
    return 0;
}