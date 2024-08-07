#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(string &s){
	int n = s.size();
	int zero = 0;
	int one = 0;

	for(int i=0;i<n;i++){
		if(s[i]=='0') zero++;
		else one++;
	}



	

	for(int i=0;i<n;i++){
		if(s[i]=='0'){
			if(one>0) one--;
			else {cout<<n-i<<endl;return;}
		}
		else{
			if(zero>0) zero--;
			else {cout<<n-i<<endl;return;}
		}
	}

	cout<<0<<endl;


}
int main(){
	// cout<<"hi";
	 ll n ;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		solve(s);
	}
	return 0;
}