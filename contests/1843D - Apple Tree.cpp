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


vector<vector<int>> g;
vector<ll>cnt;

void dfs(int v, int p) {
    if(g[v].size()==1 and g[v][0]==p){
        cnt[v]=1;
    }
    else{
        for (auto u : g[v]) {
            if(u!=p){
                dfs(u,v);
                cnt[v]+=cnt[u];
            }
        }
    }
}

void mine() {
    int n; cin >> n;
    g.assign(n, vector<int>());

    for (int i = 0; i < n-1; i++) {
        int u, v; cin >> u >> v; u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    cnt.assign(n,0);
    dfs(0,-1);

    int q; cin>>q;

    while(q--){
        int x,y; cin>>x>>y; x--; y--;
        ll ans=cnt[x]*cnt[y];
        cout<<ans<<endl;
    }

}
 
 
 
signed main() {
    
    int t=1;
 
    cin>>t;  
 
   
    while(t--){
        mine();
    }
    return 0;
}
