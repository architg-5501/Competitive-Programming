#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &r = a; //referencing
    cout << a << endl
         << r << endl;

    int b = 30;
    r = b; //not referencing ,this is declaration

    //if it is printed then the value of r and a will  become 30
}
