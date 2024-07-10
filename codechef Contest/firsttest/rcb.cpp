#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;

    while (t-- > 0)
    {
        // write your code here
        int x, y, z;
        cin >> x >> y >> z;
        if ((y - x) <= (2 * z))
        {
            cout << "YES \n";
        }
        else
        {
            cout << "NO \n";
        }
    }
    return 0;
}