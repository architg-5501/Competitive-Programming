#include <iostream>
using namespace std;

struct reactangle
{
    int lenght;
    int breadth;
    int x;
} r1, r2, r3; //global variable
int main()
{
    r1 = {10, 5};
    cout << sizeof(r1);
    r1.lenght = 15;
    r1.breadth = 10;

    cout << endl
         << r1.lenght;

    return 0;
}