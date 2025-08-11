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


void mine(){   
    
    int n; cin>>n;

    vector<vector<int>>adj(n+4);
    vector<int>cnt(n+1);

    for1(i,n-1){
        int a, b; cin>>a>>b;

        adj[a].pb(b);
        adj[b].pb(a);
    
    }

    if(n==2){
        cout<<0<<endl;
        return;
    }

    ll ans=0;

    for1(i,n){
        if(adj[i].size()==1)ans++;
    }

    int mx=0;

    for1(i,n){
        int cnt=0;

        forl(j,adj[i].size()){
            cnt+=(adj[adj[i][j]].size()==1)?1:0;
        }
        mx=max(mx,cnt);
    }

    cout<<ans-mx<<endl;


}



int main() {
    fast;
    ll t = 1; 
    cin>>t;
    // cin.ignore();
    // ll c=1;
    while (t--) {    
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}



