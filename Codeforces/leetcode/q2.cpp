#include <iostream>

int f(int a)
{
    if (a == 5)
        return 1;
    else
        return 2;
}

int main()
{
    int ans = f(5);
    std::cout << ans;
    return 0;
}