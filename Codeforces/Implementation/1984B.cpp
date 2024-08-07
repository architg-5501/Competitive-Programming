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
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll temp;
        cin>>temp;
        int digit = -1;
        bool flag=0;
        while(temp/10 != 0){   
            if(digit>=0){
                if(temp%10 == 0) {
                    flag=1;
                    break;
                }
            }
            if(digit==-1) digit = temp%10;
            temp /= 10;           
        }
        
        if(digit==9 || flag) {
            cout<<"NO"<<endl;
            continue;
        }
      
        temp%10==1?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}