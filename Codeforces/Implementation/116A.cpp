#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <string>
#include <climits>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif
    int t;

    cin >> t;
    
    int ans = 0;

    int cnt = 0;
    while (t-- > 0)
    {
        int a;
        cin >> a;
        int b;
        cin >> b;

        cnt += b;
        cnt -= a;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}