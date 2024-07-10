#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int l, int m, int r)
{
    int size1 = m - l + 1;
    int size2 = r - m;
    vector<int> arr1;
    vector<int> arr2;
    for (int i = 0; i < size1; i++)
    {
        arr1.push_back(arr[l + i]);
    }
    for (int i = 0; i < size2; i++)
    {
        arr2.push_back(arr[m + 1 + i]);
    }

    int k = l;
    int a = 0;
    int b = 0;
    while (a < size1 && b < size2)
    {
        if (arr1[a] < arr2[b])
        {
            arr[k++] = arr1[a++];
        }
        else
            arr[k++] = arr2[b++];
    }

    while (a < size1)
        arr[k++] = arr1[a++];
    while (b < size2)
        arr[k++] = arr2[b++];
}

void mergeSort(vector<int> &arr, int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }

    mergeSort(vec, 0, n - 1);
    for (auto it : vec)
        cout << it << " ";
}