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
        vector<int> vec;
        vec.resize(3);
        cin >> vec[0] >> vec[1] >> vec[2];
        // sort(vec.begin(), vec.end());

        // cout << vec[2] << "\n";
        cout << *max_element(vec.begin(), vec.end()) << "\n";
    }
    return 0;
}