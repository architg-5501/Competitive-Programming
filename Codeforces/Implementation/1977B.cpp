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
using namespace std;
#define ll int 


void solve(ll num){

    
    vector<int>vec(31);
    for(int i=0;i<31;i++){
        if(num &(1<<i)){
            vec[i] =1;
        }
        else vec[i] = 0;
    }
   
    cout<<31<<endl;
    for(auto it:vec) cout<<it<<" ";
    cout<<endl;
    
}

int main(){


    ll t;
    cin>>t;
    while(t--){
        ll num;
        cin>>num;
        solve(num);
    }
    return 0;
}