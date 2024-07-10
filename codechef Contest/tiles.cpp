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
        long long int n, x;
        cin >> n >> x;
        if (n <= x)
        {
            if (x % n == 0)
            {
                cout << "YES \n";
            }
            else
            {
                cout << "NO \n";
            }
        }
        else if (n > x)
        {
            cout << "NO \n";
        }
    }
    return 0;
}