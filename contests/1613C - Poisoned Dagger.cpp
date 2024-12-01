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
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast {ios_base::sync_with_stdio(false); cin.tie(0);}


void mine(){
    ll n,h; cin>>n>>h;

    vector<ll>v(n+1);

    forl(i,n)cin>>v[i];
    v[n]=10e18+10;

    if(n-1>=h){
        cout<<1<<endl;
        return;
    }


    ll l=0,r=1e18+10;

    ll ans=10e18+10;

    while(l<=r){
        ll mid=(l+r)/2;
        ll sum=0;
        for(ll i=0; i<n; i++){
            sum+=min(mid,v[i+1]-v[i]);
        }

        if(sum>=h){
            ans=min(ans,mid);
            r=mid-1;
        }else{
            l=mid+1;
        }
    }

    cout<<ans<<endl;
    
}



 
int main() {
    fast
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}


