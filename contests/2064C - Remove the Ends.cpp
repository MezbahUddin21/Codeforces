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

    vector<ll>v(n+2,0);
    vector<ll>pre(n+2,0);
    vector<ll>suf(n+2,0);

    for1(i,n)cin>>v[i];

    for1(i,n){
        // if(v[i]<0)continue;
        pre[i]=pre[i-1]+max(0LL,v[i]);
    }

    for(ll i=n; i>0; i--){

        // if(v[i]>0)continue;
        suf[i]=suf[i+1]+max(0LL,-v[i]);
    }

    ll ans=0;

    for(ll i=1; i<=n; i++){
        ans=max(ans,suf[i]+pre[i]);
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
