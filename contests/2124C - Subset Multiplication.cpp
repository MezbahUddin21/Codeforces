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
    
    ll n; cin>>n;

    vector<ll>v(n);

    forl(i,n)cin>>v[i];

    // cout<<__gcd(42,14)<<endl;
    ll ans=1;

    ll prev=v[0];
    for1(i,n-1){
        if(v[i]%v[i-1] and v[i-1]!=0){
            ll gcdd=__gcd(v[i],v[i-1]);

            ll pans=ans;

            prev=v[i-1];
            ans*=(prev/gcdd);
            // cout<<ans<<endl;

            ll cur=prev/gcdd;

            // cout<<cur<<endl;
            ans/=__gcd(cur,pans);
        }
    }
    cout<<ans<<endl;
    // cout<<__gcd(0,3)<<endl;

}
 
int main() {
    fast;
    int t = 1; 
    cin>>t;
    // int c=1;
    while (t--) {

        // cout<<"Case "<<c<<":"<<endl; c++;
        mine();
    }
    return 0;
}
