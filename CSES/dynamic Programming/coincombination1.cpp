#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	int *vec = new int[n];
	for(int i=0;i<n;i++) cin>>vec[i];

	
		
	vector<int>dp(k+1,0);
	
	
	dp[0]=1;
	for(int i=1;i<=k;i++){
		
		for(int j=0;j<n;j++){
			if(i>=vec[j])
			dp[i] = (dp[i] + dp[i - vec[j]])%mod;
		}
		
	}

	cout<<dp[k]<<endl;
	return 0;

}