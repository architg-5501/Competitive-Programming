#include<bits/stdc++.h>
using namespace std;
#define ll long long
// ll solve1(vector<ll>&vec,ll k,ll ind,vector<vector<int>>&dp){
// 	if(ind==0){
// 		if(k%vec[ind] == 0){
// 			return k/vec[ind];
// 		} 
// 		else{
// 			return 1e9;
// 		}
// 	}

// 	if(dp[ind][k]!=-1) return dp[ind][k];

// 	ll notTake = solve(vec,k,ind-1,dp);
// 	ll take = 1e9;
// 	if(vec[ind]<=k){
// 		take = 1 + solve(vec,k-vec[ind],ind,dp);
// 	}

// 	return dp[ind][k]=min(take,notTake);
// }

ll solve2(vector<ll>&vec,ll k){
	
	vector<vector<int>>(5,vector<int>(k+1,1e9));
	vector<int>prev(k+1,1e9);
	vector<int>curr(k+1,1e9);
	for(int i=0;i<=k;i++){
		if(i%vec[0] == 0){
			prev[i] = i/vec[0];
		}
	}

	for(int i=1;i<5;i++){
		for(int j=k;j>=0;j--){
		int take = 1e9;
			int notTake = prev[j];
			if(j>=vec[i]){
				take = 1 + curr[j-vec[i]];
			}
			curr[j] = min(take,notTake);
		}
		prev = curr;
	}

	

  return prev[k];
}

ll solve(vector<ll>vec,ll k ){
	ll ans = 0;
	for(ll i =4 ;i>=0;i--){
		if(k>=vec[i]){
			ans += k/vec[i];
			k %= vec[i];
		}
	}
	return ans;
}
int main(){
	vector<ll>vec = {1,3,6,10,15};
	ll n;
	cin>>n;
	while(n--){
		ll k;
		cin>>k;
		// vector<vector<int>>dp(5,vector<int>(k+1,-1));
		// ll ans = solve(vec,k,4,dp);
		ll ans = solve(vec,k);
		cout<<ans<<endl;
	}
	return 0;
}