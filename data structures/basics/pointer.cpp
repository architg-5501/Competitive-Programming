#include <iostream>
using namespace std;
int main()
{
    // int A[5] = {0, 1, 2, 3, 4};
    // int *p;
    // p = A;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << p[i] << endl;
    //     }

    //creating in heap
    int *p;
    p = new int[5];
    p[0] = 1;
    p[1] = 1;
    p[2] = 1;
    p[3] = 1;
    p[4] = 1;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
    delete[] p;

    // finding address of first element of array'
    //     int A[5] = {0, 1, 2, 3, 4};
    //     int *p;
    //     p = &A[0];
    //     for (int i = 0; i < 5; i++)
    //     {
    //         cout << p[i] << endl;
    //     }

    //     cout << endl
    //          << p;
    // }