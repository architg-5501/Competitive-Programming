#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 2) + fib(n - 1);
}

int Ifib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        int f;
        int i;
        int t = 0;
        int y = 1;
        for (i = 2; i <= n; i++)
        {
            f = n - i + f;
            return f;
        }
    }
}

int main()
{
    cout << fib(5) << endl;
    cout << Ifib(5);
}