#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int f(vector<int>&vec,int ind,int k){
	if(ind==0){
		if(k%vec[0]==0){
			return 1;
		}
		return 0;
	}

	int notTake = f(vec,ind-1,k);
	int take = 0;
	if(k>=vec[ind]){
		take = f(vec,ind,k-vec[ind]);
	}

	return (take + notTake);
}

int main(){
	int n ;
	cin>>n;
	int k;
	cin>>k;
	vector<int>vec(n);
	for(int i=0;i<n;i++) cin>>vec[i];

	vector<vector<int>>dp(n,vector<int>(k+1,0));
	sort(vec.begin(),vec.end());

	if(k<vec[0]){
		cout<<0<<endl;
		return 0;
	}
	for(int j=0;j<=k;j++){
		if(j%vec[0] == 0) dp[0][j]=1;
	}

	for(int i=0;i<n;i++){
		dp[i][0] = 1;
	}	
	for(int i=1;i<n;i++){
		for(int j=1;j<=k;j++){
			int take = 0;
			if(j>=vec[i]){
				take = dp[i][j-vec[i]];
			}
			int notTake = dp[i-1][j];
			dp[i][j] = (take+notTake)%mod;
		}
	}

	cout<<dp[n-1][k]<<endl;
	return 0;


}