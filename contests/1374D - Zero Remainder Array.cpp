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
    ll n,k; cin>>n>>k;

    vector<ll>v(n);

    map<ll,ll>mp;

    ll ans=0;
    ll mx=0;

    forl(i,n){
        cin>>v[i];

        v[i]=v[i]%k;
        if(v[i]==0)continue;

        mp[k-v[i]]++;

        mx=max(mx,mp[k-v[i]]);
    }

    for(auto it:mp){
        if(mx==it.second){
            ans=k*(it.second-1)+(it.first+1);
        }
    }


    cout<<ans<<endl;


}



int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
