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

        int n, m, k, dif;
        cin >> n >> m >> k;

        dif = n - (m * k);

        if (dif <= 0)
        {
            cout << "yes \n";
        }

        else
        {
            cout << "no \n";
        }
    }
    return 0;
}