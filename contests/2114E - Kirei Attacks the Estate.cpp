
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

vector<ll>adj[200005];
ll th[200005];
pair<ll,ll> dp[200005];

void dfs(int u, int p){

    
    dp[u].first=max(th[u], th[u]-dp[p].second);
    dp[u].second=min(th[u], th[u]-dp[p].first);

    for(auto v:adj[u]){
        if(v==p)continue;
        else dfs(v,u);
    }
}

void mine(){
    
    ll n; cin>>n;

    for1(i,n){
        adj[i].clear();
        cin>>th[i];
    }

    int m=n-1;

    while(m--){
        int u,v; cin>>u>>v;

        adj[u].pb(v);
        adj[v].pb(u);
    }

    dfs(1,0);


    for1(i,n)cout<<dp[i].first<<space;
    cout<<endl;


}



 
signed main() {
    
    int t=1;
    cin>>t;
    while(t--){
        mine();
    }
    return 0;
}


