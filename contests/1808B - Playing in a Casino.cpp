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
    
   ll n,m; cin>>n>>m;

   vector<vector<ll>>a(n,vector<ll>(m));

   for(ll i=0; i<n; i++){
    for(ll j=0; j<m; j++){
        cin>>a[i][j];
    }
   }

   ll ans=0;

   for(ll j=0; j<m; j++){
        vector<ll>v;
        for(ll i=0; i<n; i++){
            v.pb(a[i][j]);
        }
        sort(v.begin(),v.end());
        ll sum=0;
        ll cnt=0;
        for(ll i=0; i<n; i++){
            ans+=v[i]*cnt-sum;
            cnt++;
            sum+=v[i];
        }
   }

    cout<<ans<<endl;


}


 
int main() {
    fast;
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
