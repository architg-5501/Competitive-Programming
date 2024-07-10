#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

typedef int archit;

using namespace std;
int main()
{
    long long int t;
    cin >> t;

    while (t-- > 0)
    {
        // write your code here

        size_t N;
        string msg;

        cin >> N;

        cin >> msg;

        if (N % 2 == 0)
        {
            for (size_t i = 1; i <= N; i += 2)
            {
                swap(msg[i - 1], msg[i]);
            }
        }
        else
        {
            for (size_t i = 1; i <= N - 1; i += 2)
            {
                swap(msg[i - 1], msg[i]);
            }
        }

        for (size_t i = 0; i < N; i++)
        {

            msg[i] = 219 - msg[i];
        }
        cout << msg << "\n";
    }
    return 0;
}