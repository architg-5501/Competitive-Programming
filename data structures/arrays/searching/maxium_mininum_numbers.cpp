#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxno = INT_MIN;
    int minno = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxno)
        {
            maxno = arr[i];
        }
        if (arr[i] < minno)
        {
            minno = arr[i];
        }
    }
    cout << maxno << endl
         << minno;
    return 0;
}