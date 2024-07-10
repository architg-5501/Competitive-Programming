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
        int s;
        cin >> n;
        long long int d;
        n >= 6 ? cout << ((n - 6) / 7) + 1 << "\n" : cout << "0\n";
    }
    return 0;
}