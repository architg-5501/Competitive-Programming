#include <iostream>
using namespace std;

void fun2(int n)
{
    if (n > 0)
    {
        fun2(n - 1);
        cout << n << endl;
    }
}
int main()
{
    int x = 3;
    fun2(x);
}
