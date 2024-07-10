#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;

    while (t-- > 0)
    {
        // write your code here

        long long int n;
        cin >> n;
        bool found = false;
        while (n > 0)
        {

            int rem = n % 10;
            cout << rem << " ";
            if (rem == 0 || rem == 5)
            {
                found = true;
                break;
            }
            n = (n / 10);
        }
        if (found == true)
        {
            cout << "yes \n";
        }
        else
        {
            cout << "no \n";
        }
    }
    return 0;
}