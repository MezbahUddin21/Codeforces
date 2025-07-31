#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000003
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


#define f first
#define s second

struct DSU{
    vector<int> master, sz;
    DSU(int n=0){
        master.resize(n+1);
        for(int i=1; i<=n; i++){
            master[i] = i;
            // sz[i] = 1;
        }
    }
    int fnd(int u){
        if(master[u]==u) return u;
        return master[u] = fnd(master[u]); 
    }
    bool add(int u, int v){
        u = fnd(u); v = fnd(v);
        if(u==v) return false;
        // if(sz[u]>sz[v]) swap(u,v); 
        master[v] = u;
        // sz[v] += sz[u];
        return true;
    }
};

bool comp(vector<int> a, vector<int>b){
    return a[0]>b[0];
}
void mine(){
    
    int n; cin>>n;

    vector<vector<int>>v(n,vector<int>(4));

    int mx=0;

    forl(i,n){

        int a,b; cin>>a>>b;

        mx=max(mx,max(a,b));
        
        v[i][0]=b-a;
        v[i][1]=a;
        v[i][2]=b;
        v[i][3]=i+1;
    }

    DSU dsu(mx);

    // sort allr(v);
    sort(v.begin(),v.end(),comp);



    // forl(i,n){
    //     cout<<"d :"<<v[i][0]<<" a :"<<v[i][1]<<" b :"<<v[i][2]<<" i :"<<v[i][3]<<endl;
    // }
    vector<int>ans;

    forl(i,n){

        if(dsu.add(v[i][1],v[i][2]))ans.pb(v[i][3]);

    }

    cout<<ans.size()<<endl;
    for(auto it:ans){
        cout<<it<<space;
    }cout<<endl;

    
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
