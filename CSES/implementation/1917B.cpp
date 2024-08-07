#include<bits/stdc++.h>
using namespace std;

void f(string&vec,int ind,int &temp){
	set<char>st;
	for(int i=0;i<=ind;i++){
		st.insert(vec[i]);
		temp += st.size();
	}
	
	return ;
}

int main(){
	int n;
	cin>>n;
	while(n--){
		int t;
		cin>>t;
		string vec;
		cin>>vec;
		int ans = 0;
		f(vec,t-1,ans);
		cout<<ans<<endl;
	}
	return 0;

}