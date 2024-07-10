#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;

    while (t-- > 0)
    {
        // write your code here
        int x, y, p;
        cin >> x >> y;
        p = x / (2 * y);

        cout << p << "\n";
    }
    return 0;
}