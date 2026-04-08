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

 
 vector<vector<int>>g(2000000);

 vector<bool>vis(2000000,0);


 void dfs(int u){

 	vis[u]=1;

 	for(int v:g[u]){
 		if(vis[v])continue;

 		dfs(v);
 	}

 }


void mine(){
 

 	int n,m; cin>>n>>m;



 	forl(i,m){
 		int x,y; cin>>x>>y;

 		g[x].pb(y);

 	}


 	dfs(1);


 	int ans=0;

 	for(auto it:vis){
 		if(it)ans++;
 	}



 	cout<<ans<<endl;








}



int main() {
    fast;

    ll t = 1;
    // cin>>t
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
