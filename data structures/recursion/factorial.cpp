#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return fact(n - 1) * n;
    }
}

// loop
// int ifact(int n)
// {
//     int f = 1;
//     int i;
//     for (i = 1; i <= n; i++)
//     {
//         f = f * i;
// };
//     return f;
// }

int main()
{
    int r = fact(5);
    // int t = ifact(5);
    cout << r << endl;
    // cout << t;
}
