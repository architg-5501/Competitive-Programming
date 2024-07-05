#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *p;
    p = &a;
    cout << p << " " << *p << " " << &p << endl;
    int b = 20;
    *p = b; // modification in a
    cout << a << " " << *p;
}