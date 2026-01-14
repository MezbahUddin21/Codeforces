#include <bits/stdc++.h>
using namespace std;
#define ll long long


void file(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);

    #endif
}


void solve(){

    int n; cin>>n;

    string s; cin>>s;

    int cnt=0;

    for(int i=0; i<n/2; i++){
        if(s[i]!=s[n-i-1])cnt++;
    }
    
    if(cnt<=1)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}

int main(){

    file();
    int t=1;
    // cin>>t;

    while(t--){
        solve();
    }
}
