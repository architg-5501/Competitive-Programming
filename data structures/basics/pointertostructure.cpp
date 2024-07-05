#include <iostream>
using namespace std;
int main()
{
    struct rectangle
    {
        int lenght;
        int breadth;
    };
    //pointer in stack
    // struct rectangle r = {5, 10};
    // struct rectangle *p = &r;

    // cout << "the unchanged lenght" << p->lenght << endl;

    // p->lenght = 15;
    // p->breadth = 23;

    // cout << "the changed lenght is " << p->lenght;

    //pointer in heap
    struct rectangle r = {5, 10};
    struct rectangle *p = &r;
    p = new rectangle;
    //in c language
    // p = struct rectangle* malloc(sizeof(struct rectangle))

    cout << "the unchanged lenght" << p->lenght << endl;

    p->lenght = 15;
    p->breadth = 23;

    cout << "the changed lenght is " << p->lenght;
}
