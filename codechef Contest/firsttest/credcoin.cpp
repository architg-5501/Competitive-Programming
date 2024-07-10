#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;

    while (t-- > 0)
    {
        // write your code here
        int x, y;
        cin >> x >> y;

        cout << (y * x) / 100 << "\n";
    }
    return 0;
}