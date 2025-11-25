#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1e9+7
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"yes"<<"\n";
#define pno cout<<"no"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

/*
    n pargts and m rops
    part need vi


*/

const ll mxN=1e5+4;

vector<vector<ll>>g(mxN);
vector<ll>vis(mxN);

void mine(){

    
    ll n,m; cin>>n>>m;

    vector<pair<ll,ll>>v(n);

    for(ll i=0; i<n; i++){
        cin>>v[i].first;
        v[i].second=i+1;
    }

    while(m--){
        ll x,y; cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);

    }

    
    sort all(v);

    ll ans=0;

    for(ll i=0; i<n; i++){
        for(ll it:g[v[i].second]){

            auto check=find(g[it].begin(),g[it].end(),v[i].second);
            if(check!=g[it].end()){
                g[it].erase(check);
                ans+=v[i].first;

            }
            
        }
    }


    cout<<ans<<endl;


}

int main() {
    fast;
    ll t = 1;
    // cin>>t;
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
