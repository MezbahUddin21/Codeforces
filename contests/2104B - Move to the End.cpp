#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
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

    vector<ll>v(n);
    vector<ll>pre(n);
    vector<ll>mx(n);

    ll m=0;

    forl(i,n){
        cin>>v[i];
        m=max(m,v[i]);
        mx[i]=m;
    }

    pre[n-1]=v[n-1];

    for(ll i=n-2; i>=0; i--){
        pre[i]=pre[i+1]+v[i];
    }   

    ll ans=0;

    for(ll i=n-1; i>0; i--){
        if(pre[i]-v[i]+mx[i-1]>pre[i]){

            ans=pre[i]-v[i]+mx[i-1];

            cout<<ans<<space;

        }else cout<<pre[i]<<space;

    }cout<<pre[0]<<endl;

    
    
}



 
signed main() {
    int t=1;

   cin>>t;
    while(t--){
        mine();
    }
    return 0;
}


