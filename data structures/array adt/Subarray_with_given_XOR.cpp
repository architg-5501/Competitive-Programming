int Solution::solve(vector<int> &arr, int k) {
    int n = arr.size();
    map<int,int>mp;
    int x = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        x ^= arr[i];
        if(x == k) ans++;
        if(mp.find(x^k)!=mp.end()) {
            ans += mp[x^k];
        }
        mp[x]++;
    }
    return ans;
}
