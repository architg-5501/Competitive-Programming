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
        long long int x, y;
        cin >> x >> y;
        cout << abs((x - y)) << "\n";
    }
    return 0;
}