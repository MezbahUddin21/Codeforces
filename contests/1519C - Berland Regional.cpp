#include <bits/stdc++.h>
using namespace std;


// Debug..
// #ifndef LOCAL
// #include "debug.h"
// #else
// #define dg(x...)
// #endif

#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) v.begin(), v.end()
#define allr(v) v.begin(), v.end(),greater<>()
#define pyes cout<<"YES"<<"\n";
#define pno cout<<"NO"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)

  

void mine(){

    ll n; cin>>n;

    vector<vector<ll>>v(n);

    vector<ll>u(n);

    forl(i,n){cin>>u[i];--u[i];}

    forl(i,n){

        ll x; cin>>x;
        v[u[i]].pb(x);
    }

    forl(i,n){
        sort(allr(v[i]));
    }


    vector<vector<ll>>pre(n,vector<ll>(1,0));

    forl(i,n){
        for(auto it:v[i]){
            pre[i].pb(pre[i].back()+it);
        }
    }


    vector<ll>final(n,0);

    forl(i,n){

        ll sz=v[i].size();

        for(ll k=1; k<=sz; k++){
            final[k-1]+=pre[i][sz/k*k];
        }
    }


    for(auto i:final){
        cout<<i<<space;
    }

    cout<<endl;


}



int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
