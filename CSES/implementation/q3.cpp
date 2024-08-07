#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    int K;
    cin >> K;

    unordered_map<int, int> priceCount;

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int targetPrice1 = prices[i] - K;
        int targetPrice2 = prices[i] + K;

        total += priceCount[targetPrice1] + priceCount[targetPrice2];

        priceCount[prices[i]]++;
    }

    cout << total << endl;

    return 0;
}
