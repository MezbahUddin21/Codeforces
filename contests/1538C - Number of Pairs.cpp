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
 
 
 
void mine(){
    ll n,l,r; cin>>n>>l>>r;

    vector<ll>v(n);

    forl(i,n)cin>>v[i];

    sort all(v);

    ll ans=0;

    forl(i,n){

        ans+=abs(lower_bound(v.begin(),v.begin()+i,l-v[i])-upper_bound(v.begin(),v.begin()+i,r-v[i]));


    }

    cout<<ans<<endl;

}
 
 
 
 
signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
 
    cin>>t;
 
//    int c=1;
    while(t--){

        // cout<<"Case "<<c<<":"<<endl;c++;
        mine();
    }
    return 0;
}
