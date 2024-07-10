#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

vector<long long int> solveQues(long long int x, long long int n)
{
    long long int a, b, c = 0;
    long long int d = 1;

    if (x > 3 * n || x < -n)
    {

        d = 0;
    }
    else
    {
        if (x == (3 * n) - 1 || x == (3 * n) - 2 || x == (3 * n) - 5)
        {
            d = 0;
        }

        if (x % 3 == 0)
        {
            a = x / 3;
            b = 0;
            c = n - (a + b);
        }
        else if (x < 0)
        {
            a = 0;
            b = -x;
            c = n - (a + b);
        }
        else
        {
            a = (x / 3) + 1;
            b = (3 * a) - x;
            c = n - (a + b);
        }
    }

    vector<long long int> ans;
    ans.push_back(a);
    ans.push_back(b);
    ans.push_back(c);
    ans.push_back(d);

    return ans;
}

using namespace std;
int main()
{
    long long int t;
    cin >> t;

    while (t-- > 0)
    {
        long long int x;
        long long int n = 100000;
        // cin >> n >> x;

        for (size_t i = 0; i <= n; i++)
        {
            auto sol = solveQues(i, n);
            cout << "x = " << i << "\n";
            if (sol[3] == 1)
            {
                cout << "Yes\n";
                if (i == sol[0] * 3 + sol[1] * -1)
                {
                    cout << "Verified\n";
                    cout << sol[0] << "*3 +" << sol[1] << "*-1 "
                         << " = " << i << "\n";
                }
            }
            cout << "-------------------------------------------\n";
        }
    }
    return 0;
}