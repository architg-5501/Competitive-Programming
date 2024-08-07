#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <string>
#include <climits>
#include <stack>
#include <queue>
#define ll long long
using namespace std;



void solve(vector<ll>&a,vector<ll>&b){
   vector<ll>temp = a;
    ll n = b.size();
    ll res = 0;
    bool flag=0;
    ll diff = LONG_MAX;
    for(ll i=0;i<n;i++){       
        
           if(i<n-1){
            res += abs(a[i] - b[i]);
            ll maxi = max(a[i]*1ll,b[i]*1ll);
            ll mini = min(a[i]*1ll,b[i]*1ll);
            if(b[n-1]<= maxi && b[n-1]>= mini) {
                flag=1;
            }
            
             diff = min(diff,min(abs(a[i]-b[n-1]),abs(b[i]-b[n-1])));
           }
           
            else{
                if(flag) {
                    res++;
                    continue;
                }
                else{
                    if(diff != LONG_MAX)
                    res += diff+1;
                }
             
            }
        
       
    }
    cout<<res<<endl;
    return ;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n ;
    cin>>n;
    vector<ll>a;
    vector<ll>b;

    for(ll i=0;i<n;i++){
        ll t;
        cin>>t;
        a.push_back(t);
    }
    for(ll i=0;i<=n;i++){
        ll t;
        cin>>t;
        b.push_back(t);
    }
    solve(a,b);
    }
    return 0;
}