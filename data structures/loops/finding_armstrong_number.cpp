#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int b = n;
    int cube = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        cube = cube + pow(lastdigit, 3);
        n = n / 10;
    }
    if (cube == b)
    {
        cout << "ARMSTRONG NUMBER";
    }
    else
    {
        cout << "NOT A ARMSTRONG NUMBER";
    }
    return 0;
}