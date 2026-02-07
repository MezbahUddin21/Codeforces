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
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

/*


*/

bool dfs(int u, int n, vector<vector<int>>&graph, vector<int>&vis){
    vis[u]=1;
    for(auto &v:graph[u]){
        if(!vis[v]){
            if(dfs(v,n,graph,vis))return true;
        }else if(vis[v]==1)return true;
    }
    
    vis[u]=2;
    return false;
}

void mine(){

    int n,k; cin>>n>>k;

    vector<vector<int>>v(k+1,vector<int>(n+3));

    for1(i,k){
        for1(j,n)cin>>v[i][j];
    }

    vector<vector<int>>graph(n+3);

    vector<int>vis(n+3,0);

    for1(i,k){
        for1(j,n-1){
            graph[v[i][j+1]].pb(v[i][j+2]);
            
        }
    }

    for1(i,n){
        if(vis[i])continue;
        else{
            if(dfs(i,n,graph,vis)){
                pno
                return;
            }
        }
    }
    pyes


}

int main() {
    fast;
    ll t = 1;
    cin>>t;
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
