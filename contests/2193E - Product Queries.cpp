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

    vector<ll>dp(n+1, INT_MAX);

    for1(i,n){
        ll x; cin>>x;
        if(x<=n)dp[x]=1;
    }

    for1(i,n){
        for(ll j=2; j*j<=i; j++){
            if(dp[j]!=INT_MAX and i%j==0)dp[i]=min(dp[i],dp[j]+dp[i/j]);
        }
    }

    for1(i,n)cout<<((dp[i]==INT_MAX)?-1:dp[i])<<space;
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
