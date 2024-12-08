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

    ll n,m; cin>>n>>m;
    ll sz=n*m;

    vector<ll>v(sz);

    forl(i,sz)cin>>v[i];

    sort all(v);

    ll mx=v[sz-1];
    ll mn=v[0];


    ll ans=0;

    ll b=max(n,m);
    ll a=min(n,m);


    ll ans1=a*(b-1)*(mx-mn)+ (a-1)*(mx-v[1]);
    ll ans2=a*(b-1)*(mx-mn)+ (a-1)*(v[sz-2]-v[0]);

    cout<<max(ans1,ans2)<<endl;
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


