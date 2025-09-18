#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1e9+7
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"Yes"<<"\n";
#define pno cout<<"No"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

/*


*/

ll mxN=1e6+10;

vector<vector<ll>>g(mxN);

vector<bool>vis(mxN);

vector<int>parent(mxN);

void dfs(int u, int p){

    parent[u]=p;

    for(auto v:g[u]){
        if(v!=p){
            dfs(v,u);
        }
    }

}

void mine(){   

    ll n,r; cin>>n>>r;

    ll m=n-1;


    while(m--){
        ll x,y; cin>>x>>y;

        g[x].pb(y);
        g[y].pb(x);

    }

    dfs(r,0);

    vector<ll>ans(n+1);

    for1(i,n)vis[i]=0;

    ll start=1;
    ans[r]=start++;
    vis[r]=1;

    // cout<<ans[r]<<endl;


    for1(i,n){

        if(!vis[i]){
            vector<ll>path;
            vis[i]=1;
            path.pb(i);

            int cur=i;

            while(parent[cur]!=0){
                vis[cur]=1;
                cur=parent[cur];
                if(vis[cur])break;
                path.pb(cur);

            }

            reverse(path.begin(),path.end());

            // for(auto it:path)cout<<it<<space;
            // cout<<endl;

            for(auto it:path)ans[it]=start++;

        }


    }


    for1(i,n)cout<<ans[i]<<space;

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
