#include <iostream>
using namespace std;
struct myarray
{
    int *a;
    int length;
    int size;
};

void append(struct myarray arr, int x)
{
    if (arr.lenght < arr.size)
    {
        arr.a[(arr.lenght)++] = x;
    }
}

void insert(struct myarray arr, int index, int z)
{
    if (index >= 0 && index <= arr.length)
        for (size_t i = arr.length, i < index, i++)
        {
            arr.a[i] = arr.a[i - 1];
            arr.a[index] = x;
            arr.length++;
        }
}

void display(struct myarray arr, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << arr.a[i] << "\n";
    }
}

int delete (struct myarray arr, int index)
{
    int x = 0;
    x = arr.a[index];
    for (size_t i = index, i < arr.length, i++)
    {
        arr.a[i] = arr.a[i - 1];
        arr.length--;
        return x;
    }
    return 0;
}
int main()
{

    myarray arr;

    arr.a = new int[5]{1, 2, 3, 4, 5};

    display(arr, 5);
    insert(arr, 2, 5);
    delete (arr, 1)
}