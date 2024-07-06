#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7;


int solve(int n , vector<int>&dp){
	if(n==0) return 1;
	if(n<0) return 0;
	if(dp[n]!=-1) return dp[n];
	int ways = 0;
	for(int i=1;i<=6;i++){
		ways = (ways +  solve(n-i,dp))%mod;
	}

	return dp[n]= (ways);
}


int main(){
	int n ;
	int ind = 6;
	cin>>n;
	
	vector<int>dp(n+1,-1);
	int ans = solve(n,dp);
	cout<<endl<<ans <<endl;
	return 0;
}