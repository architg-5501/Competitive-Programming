#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	vector<int>vec(n);
	for(int i=0;i<n;i++) cin>>vec[i];
	sort(vec.begin(),vec.end());
	vector<vector<int>>dp(n,vector<int>(k+1,0));
	if(vec[0]>k) {
		cout<<-1<<endl;
		return 0;
	}
	for(int i=1;i<=k;i++){
		if(i%vec[0] == 0) dp[0][i] = i/vec[0];
    
	}
	for(int i=0;i<n;i++){
		dp[i][0] = 0;
	}



	for(int i =1 ;i<n;i++){
		
		for(int j=1;j<=k;j++){
			int notTake = dp[i-1][j];
			int take = 0;
			if(j >= vec[i]){

				take = 1 + dp[i][j-vec[i]];
			}
			dp[i][j] = (take+notTake);
		}
	}

	 if (dp[n - 1][k] >= 1e9) {
        cout << -1 << endl;
    } else {
        cout << dp[n - 1][k] << endl;
    }
	return 0;

}