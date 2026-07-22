#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    ll suml=(k*(k+1))/2;
    ll a=n-k+1;
    ll b=n;
    ll sumh=(((b*b)+b)/2-b)-(((a*a)+a)/2)+n-k+1+n;
 
    if(suml>x || sumh<x){
        cout<<"no"<<endl;
    }else{
        cout<<"yes"<<endl;
    }
    
}
    
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
 
 
 
 
 
 
 
 
 