//function for adding two numbers
#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c;
    c = a + b;
    return (c);
}
int main()
{
    int x, y, sum;
    cout << "value of x  " << endl;
    cin >> x;
    cout << "value of y  " << endl;
    cin >> y;
    sum = add(x, y);
    cout << endl
         << "the sum of no. is " << endl
         << sum;
}
