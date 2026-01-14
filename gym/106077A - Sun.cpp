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

    ll n; cin>>n;
    ll m; cin>>m;

    vector<ll>v(n+1,0);
    vector<ll>vv(n+1,0);


    for(ll i=1; i<=n; i++){
        cin>>v[i];
    }

    for(ll i=1; i<=n; i++){
        vv[i]=v[i];
        if(i%2)vv[i]*=2;
    }

    for(ll i=1; i<=n; i++){
        if(i%2==0)v[i]*=2;
    }

    for(ll i=1; i<=n; i++){
        v[i]+=v[i-1];
        // cout<<v[i]<<" ";
    }

    for(ll i=1; i<=n; i++){
        vv[i]+=vv[i-1];
        // cout<<v[i]<<" ";
    }
    // cout<<endl;

    while(m--){

        ll l,r; cin>>l>>r;
        
        if(l%2)cout<<v[r]-v[l-1]<<endl;
        else cout<<vv[r]-vv[l-1]<<endl;

        // cout<<"p " <<vv[r]<<endl;


    }

    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    file();
    int t=1;
    // cin>>t;

    while(t--){
        solve();
    }
}
