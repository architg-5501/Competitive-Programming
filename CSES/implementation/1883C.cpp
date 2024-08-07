#include<bits/stdc++.h>
using namespace  std;


int solve(vector<int>&vec,int k){

	int ans = INT_MAX;
	int e = 0;
	int o = 0;

	
	for(int i=0;i<vec.size();i++){
		if(vec[i]%k == 0) return 0;
		if(vec[i]%2) o++;
			else e++;
		int q = vec[i]/k;
		q++;

		ans = min(ans,((q*k) - vec[i]));
	}
	if(k==4){
		

		if(e >= 2) return 0;
		else if(e==1) return 1;
		else return min(ans,2);
	}
	return ans;
}

int main(){
	
	int n;
	cin>>n;
	while(n--){
		int size;
		cin>>size;
		int k;
		cin>>k;
		vector<int>vec(size);
		for(int i=0;i<size;i++){
			cin>>vec[i];
		}

		int ans =solve(vec,k);
		cout<<ans<<endl;

	}
	return 0;
}