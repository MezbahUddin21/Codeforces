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



void mine(){

    int n,k; cin>>n>>k;

    int m=n-1; 

    vector<vector<int>>g(n+10);
    vector<int>vis(n+10,0);
    vector<int>NoOfNodesInSubTree(n+10,1);

    auto dfs=[&](auto &dfs, int u, int p)-> void{

        for(auto v:g[u]){
            if(v!=p){
                dfs(dfs, v, u);
                NoOfNodesInSubTree[u]+=NoOfNodesInSubTree[v];
            }
        }
    };

    while(m--){
        int x,y; cin>>x>>y;

        g[x].pb(y);
        g[y].pb(x);
    }


    dfs(dfs,1,0);
    ll ans=0;
    for1(i,n){
        if(n-NoOfNodesInSubTree[i]>=k)ans+=NoOfNodesInSubTree[i];
        if(NoOfNodesInSubTree[i]>=k)ans+=n-NoOfNodesInSubTree[i];
    }

    cout<<ans+n<<endl;




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
