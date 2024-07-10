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
        long long int n, k;
        cin >> n >> k;
        string state;
        if (k == 0)
        {
            state = "OFF";
        }
        else
        {
            state = "ON";
        }
        if (n % 4 == 0)
        {
            cout << state << "\n";
        }
        else if (k == 0 && n % 4 != 0)
        {
            cout << "ON \n";
        }
        else if (k == 1)
        {
            cout << "Ambiguous \n";
        }
    }
    return 0;
}