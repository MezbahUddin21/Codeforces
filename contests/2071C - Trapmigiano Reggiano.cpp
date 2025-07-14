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
#define ll long long int
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


void mine(){
    
    int n,st,en; cin>>n>>st>>en;

    vector adj(n+1, vector<int>()); //didn't know, a 2d vector can be written this way

    for1(i,n-1){
        int u,v; cin>>u>>v;
        adj[v].pb(u);
        adj[u].pb(v);
    }

    vector dis(n+1, vector<int>());

    vector<int>d(n+1);

    //what an incredible way to write function in a local block
    
    auto dfs=[&](auto &&self, int v, int par)-> void{
        d[v]=d[par]+1;
        dis[d[v]].pb(v);

        for(auto u: adj[v]){
            if(u==par)continue;
            else self(self, u, v);
        }

    };

    dfs(dfs, en, 0);


    for(int i=n; i>=1; i--){
        for(auto j:dis[i]){
            cout<<j<<space;
        }
    }cout<<endl;

    

    
}


int main(){
    fast;
    ll t = 1; 
    cin>>t;
    // int c=1;
    while (t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}

