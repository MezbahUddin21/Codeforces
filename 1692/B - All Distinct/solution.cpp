#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void mezbah(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
 
void solve(){
    int n,a;
    cin>>n;
    map<int,int>maa;
    a=0;
    for(int i=0; i<n; i++ ){
        cin>>a;
        maa[a]++;
    }
    int count=0;
    for(auto e:maa){
        count+=e.second-1;
    }
    if(count%2==1){
        count++;
    }
    cout<<n-count<<endl;
 
}
 
int main() {
    mezbah();
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}