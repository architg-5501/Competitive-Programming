#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
    long long int t;
    cin >> t;

    while (t-- > 0)
    {
        // write your code here
        long long int n, k, p, area;
        cin >> n >> k;
        long long int *A = 0;

        for (size_t i = 0; i <= n; i++)
        {
            int w, b;
            cin >> w >> b >> p;
            area = w * b;
            A[i] = area;
            A[i + 1] = p;
        }
    }
    return 0;
}