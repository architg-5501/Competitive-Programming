#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	set<int>st;
	int number = 0;
	int ans = 0;
	int maxi = INT_MIN;
	int num = n;
	while(num){
	    int t = num;
	    int maxi = INT_MIN;
	    while(t){
	    	maxi = max(maxi,t%10);
	    	t /= 10;
	    }

	    num -= maxi;
	    ans++;

	}
	cout<<ans<<endl;
	

	

	return 0;


}