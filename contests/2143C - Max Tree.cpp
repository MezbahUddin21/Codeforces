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


*/



void mine(){

    ll n; cin>>n;

    vector<vector<ll>>g(n+2);

    vector<ll>ans(n+2);

    ll m=n-1;

    while(m--){
        ll u,v,x,y; cin>>u>>v>>x>>y;
        if(x<y){
            g[v].pb(u);
        }else{
            g[u].pb(v);
        }

    }
    
    queue<ll>q; 
	vector<ll>topovector;
	vector<ll>indegree(n+2); 

	for1(i,n)for(auto it: g[i])indegree[it]++; 

	for1(i,n)if(indegree[i] == 0)q.push(i);

	while(!q.empty()){
	    ll node=q.front(); 
	    q.pop(); 
	    topovector.pb(node);
	    for(auto it:g[node]){
	        indegree[it]--;
	        if(indegree[it]==0){
	            q.push(it); 
	        }
	    }
	}
    

    forl(i,n)ans[topovector[i]]=n-i;

    for1(i,n)cout<<ans[i]<<space;

    cout<<endl;






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
