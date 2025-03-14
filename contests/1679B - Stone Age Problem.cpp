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

    ll n,q; cin>>n>>q;

    map<ll,ll>mp;

    ll x;

    ll sum=0;

    for1(i,n){
        ll x; cin>>x;
        mp[i]=x;

        sum+=x;
    }

    while(q--){
        ll a,b;

        cin>>a>>b;

        if(a==1){
            ll c; cin>>c;

            if(mp[b]==0)mp[b]=x;

            sum-=mp[b];

            sum+=c;

            mp[b]=c;

            cout<<sum<<endl;
        }
        else{
            sum=n*b;
            x=b;
            mp.clear();
            cout<<sum<<endl;
        }

    }


}



int main() {
    int t=1;
    // cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
