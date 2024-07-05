#include <iostream>
using namespace std;

int n, i = 0;
struct Array
{
    int *A;
    int length;
    int size;
};
struct Array arr;
void display()
{
    for (i = 0; i < n; i++)
    {
        cout << arr.A[i];
    }
}

int main()
{

    arr.A = new int[n];
    cout << "enter the size of the array \n";
    cin >> arr.size;
    cout << "enter number of numbers \n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        arr.A[i] = a;
    }
    arr.length = n;
    display();
}