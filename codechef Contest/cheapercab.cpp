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
        if (x < y)
        {
            cout << "first"
                 << "\n";
        }
        else if (x == y)
        {
            cout << "any \n";
        }
        else
        {
            cout << "second\n";
        }
    }
    return 0;
}