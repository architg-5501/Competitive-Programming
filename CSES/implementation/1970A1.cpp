#include<bits/stdc++.h>
using namespace std;

class cmp {
public:
  bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first != b.first)
            return a.first < b.first;
        return a.second > b.second;
    }
};



void solve(string &s){
	int n = s.size() ;
	vector<pair<int,int>>vec;
	stack<int>st;
	for(int i=0;i<n;i++){
		vec.push_back({st.size(),i+1});
		if(s[i]=='('){
			st.push('(');
		}
		else st.pop();
	}

	sort(vec.begin(),vec.end(),cmp());

	for(int i=0;i<n;i++){
		cout<<s[vec[i].second -1];
		
	}
	cout<<endl;

}

int main(){
	string t;
	cin>>t;
	solve(t);
	return 0;
}