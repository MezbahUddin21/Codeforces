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

    int n; cin>>n;

    vector<vector<int>>g(n+1);

    for1(i,n){
        int x,y; cin>>x>>y;

        if(x==0 and y==0)continue;

        g[i].pb(x);
        g[i].pb(y);
        g[x].pb(i);
        g[y].pb(i);

    }
    vector<int>cnt(n+1,0);
    vector<int>res(n+1,0);


    function<void(int,int)> dfs1=[&](int s, int p){

        cnt[s]=1;
        for(auto it:g[s]){
            if(it==p)continue;
            dfs1(it,s);
            cnt[s]+=cnt[it];

        }
        
    };

    function<void(int,int)> dfs2=[&](int s, int p){
        
        res[s]=((cnt[s]-1)*2);
        res[s]%=mod;
        res[s]+=(res[p]+1);
        res[s]%=mod;

        for(auto it:g[s]){
            if(it==p)continue;
            dfs2(it,s);
        }

    };

    dfs1(1,0);
    dfs2(1,0);

    for1(i,n)cout<<res[i]<<space;

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
