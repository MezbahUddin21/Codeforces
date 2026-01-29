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

    ll n; cin>>n;

    vector<ll>v(n);
    forl(i,n)cin>>v[i];

    map<ll,vector<ll>>adj;

    forl(i,n){
        ll u=v[i]+i;
        ll v=u+i;

        adj[u].pb(v);
    }
    set<ll>vis;
    function<void(ll)> dfs=[&](ll u)-> void{
        if(vis.count(u))return;
        vis.insert(u);

        for(auto v: adj[u]){
            dfs(v);
        }

    };

    dfs(n);

    cout<<*vis.rbegin()<<endl;
    

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
