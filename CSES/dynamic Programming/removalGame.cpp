#include <bits/stdc++.h>
using namespace std;

long long f(vector<long long>& vec, int l, int r, vector<vector<long long>>& dp, vector<vector<long long>>& sum) {
    if (l > r) return 0;
    if (dp[l][r] != LLONG_MIN) return dp[l][r];
    
    long long total = sum[l][r];
    
    long long chooseLeft = vec[l] + total - vec[l] - f(vec, l + 1, r, dp, sum);
    long long chooseRight = vec[r] + total - vec[r] - f(vec, l, r - 1, dp, sum);

    return dp[l][r] = max(chooseLeft, chooseRight);
}

int main() {
    int n;
    cin >> n;
    vector<long long> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<vector<long long>> dp(n, vector<long long>(n, LLONG_MIN));
    vector<vector<long long>> sum(n, vector<long long>(n, 0));

    for (int i = 0; i < n; i++) {
        long long currentSum = 0;
        for (int j = i; j < n; j++) {
            currentSum += vec[j];
            sum[i][j] = currentSum;
        }
    }

    cout << f(vec, 0, n - 1, dp, sum) << endl;
    return 0;
}
