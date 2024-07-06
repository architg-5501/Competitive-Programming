#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int f(vector<vector<char>>&g,int i,int j,int n){
	if(i==0 && j==0) {
		
		return 1;
	}
	if(i==n || j==n || i<0 || j<0 ) return 0;
    if(g[i][j] == '*' ) return 0;
   
   

	int up = f(g,i-1,j,n);
	int left = f(g,i,j-1,n);


	return up+left;
}

int main(){
	int n;
	
	cin>>n;

	vector<vector<char>>vec(n,vector<char>(n));
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cin>>vec[i][j];
	}
	if(vec[0][0] == '*') {
		cout<<0<<endl;
		return 0;
	}
	// cout<<f(vec,n-1,n-1,n);

	vector<vector<int>>dp(n,vector<int>(n,0));
	dp[0][0] = 1;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0 && j==0) continue;
			if(vec[i][j] == '*') continue;
			int up =0 ;
			int left= 0;

			if(i-1>=0){
				up = dp[i-1][j];
			}
			if(j-1>=0) left = dp[i][j-1];

			dp[i][j] = (left+up)%mod;
		}
	}

	cout<<dp[n-1][n-1]<<endl;

	return 0;
}