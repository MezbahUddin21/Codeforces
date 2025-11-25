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
    an array and m operations

    each operations,
        l r d
        incrase l to r by d

    k queries,
        x y <=m



*/

void mine(){

    
    ll n,m,k; cin>>n>>m>>k;

    vector<ll>v(n+2,0);

    for(ll i=1; i<=n; i++){

        cin>>v[i];
    }

    vector<vector<ll>>M(m+2,vector<ll>(4));

    for(ll i=1; i<=m; i++){
        ll l,r,d; cin>>l>>r>>d;

        M[i][1]=l;
        M[i][2]=r;
        M[i][3]=d;
        
    }

    vector<ll>preK(m+2,0);

    while(k--){

        ll x,y; cin>>x>>y;
        preK[x]+=1;
        preK[y+1]-=1;
    }

    for(ll i=1; i<=m; i++){
        preK[i]+=preK[i-1];
    }

    vector<ll>preM(n+2);

    for(ll i=1; i<=m; i++){
        preM[M[i][1]]+=preK[i]*M[i][3];
        preM[M[i][2]+1]-=preK[i]*M[i][3];
    }

    for(ll i=1; i<=n; i++){
        preM[i]+=preM[i-1];
    }

    for(ll i=1; i<=n; i++){
        cout<<v[i]+preM[i]<<space;
    }


}

int main() {
    fast;
    ll t = 1;
    // cin>>t;
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
