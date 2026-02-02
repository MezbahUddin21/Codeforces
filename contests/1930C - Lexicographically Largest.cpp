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
 empty s
  1. select an index i
  insert ai + i
  delete ai

*/

map<ll,ll>root;

ll find(ll x){
    if(root[x]==x)return x;
    else return root[x]=find(root[x]);
}

void unite(ll x,ll y){
    x=find(x),y=find(y);
    root[x]=y;
}

void mine(){

    ll n; cin>>n;

    vector<ll>v(n+1,0);

    for1(i,n)cin>>v[i];

    set<ll>st;

    for1(i,n){
        ll x=v[i]+i;

        ll y;

        if(st.find(x)!=st.end()){
            y=find(x)-1;
            st.insert(y);
        }else{
            y=x;
            st.insert(y);
        }
        root[y]=y;

        if(st.find(y-1)!=st.end()){
            unite(y,y-1);
        }
        if(st.find(y+1)!=st.end()){
            unite(y+1,y);
        }
    }

    vector<ll>ans;
    for(auto it:st)ans.pb(it);
    reverse(ans.begin(),ans.end());

    for(auto it:ans)cout<<it<<space;


    cout<<endl;





}

int main() {
    fast;
    ll t = 1;
    cin>>t;
    // ll c=1;
    while (t--) {
        root.clear();
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
