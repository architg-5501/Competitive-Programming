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
        long long int x, n;
        cin >> x, n;

        cout << ((x * n) / 10) << endl;
    }
    return 0;
}