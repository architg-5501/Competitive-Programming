#include <iostream>
using namespace std;
// two function  caliing itself in a circular manner
void funB(int n);
void funA(int n)
{
    if (n > 0)
    {
        cout << n;
        funB(n - 1);
    }
}

void funB(int n)
{
    if (n > 1)
    {

        cout << n;
        funA(n / 2);
    }
}

int main()
{
    funA(20);
}