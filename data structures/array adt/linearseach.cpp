#include <iostream>
using namespace std;

int linearsearch(int a[], int n, int key)
{
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << linearsearch(arr, n, 34);
}