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
#define ll long long 

int solve(vector<ll>&vec,ll k){
    ll mod = 1e9 + 7;
    while(k--){
        ll maxi = INT_MIN;
        ll sum = 0;
        ll ind = 0;
        ll n = vec.size();
        for(ll it=0;it<n;it++){
            sum += vec[it];
            sum %= mod;
            if(maxi<=sum){
                maxi = sum;
                ind = it;
            }
            if(sum<0){
                sum = 0;
            }
        }
        if(ind == n-1) vec.push_back(sum);
        else{
           vec.insert(vec.begin()+ind,sum);
        }
        
    }
    ll maxi = INT_MIN;
        ll sum = 0;
        ll ind = 0;
        ll n = vec.size();
        for(ll it=0;it<n;it++){
            sum += vec[it];
            sum %= mod;
            if(maxi<=sum){
                maxi = sum;
                ind = it;
            }
            if(sum<0){
                sum = 0;
            }
        }
       return maxi%mod;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>vec(n);
        for(ll i=0;i<n;i++){
            cin>>vec[i];
        }

        int ans = solve(vec,k);
        reverse(vec.begin(),vec.end());
        int res = solve(vec,k);

        cout<<max(ans,res)<<endl;
        
    }
    return 0;
}