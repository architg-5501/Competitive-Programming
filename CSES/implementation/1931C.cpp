#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(vector<ll>&vec){
	ll n = vec.size();
	ll i = 0;
	ll j = 0;
	ll start = 0;
	ll end = 0;
	ll cnt = 1;
	while(j<n){
		while(i<j && vec[i]!=vec[j]){
			i++;
			
		}
		if(j-i+1 >cnt){
			cnt = j-i+1;
			end = j;
			start = i;
		}
		j++;
	}
	cout<<"cnt is ->"<<cnt<<endl;
	if(cnt == n-2) cout<<n<<endl;

	else {
		ll ans = n-cnt;
		cout<<"j->"<<j<<endl;
		if(start==1 || end==n-2) ans++;
		cout<<ans<<endl;
	}
	return ;

}

void solve1(vector<ll>&vec){
	ll n = vec.size();
	

	ll cnt = 0;
	for(ll i= 0;i<n;i++){
		if(vec[i] == vec[0]) cnt++;
	}
	if(cnt==n){
		cout<<0<<endl;
		return ;
	}
	
	ll i =0;
	ll j = n-1;

	while(vec[0] == vec[i]) i++;
	while(vec[n-1] == vec[j]) j--;
	
	if(i==n) {
		cout<<0<<endl;
		return;
	}
	
	if(vec[0] == vec[n-1]){
		cout<<j-i+1<<endl;
	}
	else{
		if(n-i < j+1){
		
			cout<<n-i<<endl;
		}
		else {
			
			cout<<j+1<<endl;
		}

	}
	return;

}


int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll>vec(n);
		for(ll i=0;i<n;i++){
			cin>>vec[i];
		}
		// solve(vec);
		solve1(vec);
	}
	return  0;
}