#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;

    while (t-- > 0)
    {
        // write your code here
        int x, y, d, diff;
        cin >> x >> y >> d;
        diff = x - y;
        if (diff >= 0)
        {
            if (diff <= d)
            {
                cout << "YES \n";
            }
            else
            {
                cout << "NO \n";
            }
        }
        else
        {
            diff = diff * (-1);

            if (diff <= d)
            {
                cout << "YES \n";
            }
            else
            {
                cout << "NO \n";
            }
        }
    }
    return 0;
}