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
        long long int n;
        cin >> n;
        long long int d = n % 2;
        if (n == 1)
        {
            cout << 1 << "\n";
        }
        else
        {
            if (d == 0)
            {
                cout << n / 2 << "\n";
            }
            else
            {
                cout << (n / 2) + 1 << "\n";
            }
        }
    }
    return 0;
}