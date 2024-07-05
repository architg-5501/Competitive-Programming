#include <iostream>
using namespace std;
//call by value
// void swap(int x, int y)
// {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// };

// int main()
// {
//     int a = 5;
//     int b = 10;
//     swap(a, b);
//     cout << a << endl
//          << b;
// }
//call by address

// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// };

// int main()
// {
//     int a = 5;
//     int b = 10;
//     swap(&a, &b);
//     cout << endl
//          << a << endl
//          << b;
// }
//call by reference
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
};

int main()
{
    int a = 5;
    int b = 10;
    swap(a, b);
    cout << a << endl
         << b;
}