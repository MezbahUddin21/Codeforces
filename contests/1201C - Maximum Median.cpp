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


const ll mx=2e5+5;
ll n,k;
ll v[mx];

bool cal(ll val){
    ll sum=0;
    for(int i=n/2+1; i<=n; i++){
        if(val-v[i]<0)break;
        sum+=val-v[i];
    }

    return (sum<=k);
}

void mine(){
    cin>>n>>k;

    for1(i,n)cin>>v[i];

    sort(v+1,v+n+1);

    ll l=0, r=2e9+5;
    ll ans=0;
    while(l<=r){
        ll mid=(l+r)/2;

        if(cal(mid)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }

    cout<<ans<<endl;

    
}


 
int main() {
    int t=1;
    // cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
