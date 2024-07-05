#include <iostream>
using namespace std;

int sum(int n)
{
    if (n > 0)
    {
        return sum(n - 1) + n;
    }
}

int main()
{
    int r = sum(5);
    cout << r << endl;
    int s = 0;
    int i, n;
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        s = s + i;
        return s;
    }
    cout << s;
}
