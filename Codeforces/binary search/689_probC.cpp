#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string>
#include <climits>
#include <stack>
#include <queue>
using namespace std;
#define ll long long

int main(){
    ll n,m;
    cin>>n>>m;
    vector<int>arr(n);

    for(ll i=0;i<n;i++) cin>>arr[i];
    
    ll cnt=0;
    for(ll i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            for(int j=i;j<i+m && j<n ;j++){
                arr[j] = arr[j]+1;
            }
        }
    }
}