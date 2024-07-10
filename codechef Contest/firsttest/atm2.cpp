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
        long long int n, k, a;
        cin >> n >> k;
        for (size_t i = 0; i < n; i++)
        {
            cin >> a;
            if ((k - a) >= 0)
            {
                cout << "1";
                k = k - a;
            }
            else
            {
                cout << "0";
            }
        }

        cout << "\n";
    }
    return 0;
}