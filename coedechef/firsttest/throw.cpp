#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;

    while (t-- > 0)
    {
        // write your code here
        int a, b, c;
        cin >> a >> b >> c;

        if (a > b)
        {
            if (a > c)
            {
                cout << a << "\n";
            }
            else if (a == c)
            {
                cout << a << "\n";
            }
            else
            {
                cout << c << "\n";
            }
        }
        else if (a == b)
        {
            if (a > c)
            {
                cout << a << "\n";
            }
            else if (a == c)
            {
                cout << a << "\n";
            }
            else
            {
                cout << c << "\n";
            }
        }

        else
        {
            if (b > c)
            {
                cout << b << "\n";
            }
            else if (b == c)
            {
                cout << c << "\n";
            }
            else
            {
                cout << c << "\n";
            }
        }
    }
    return 0;
}