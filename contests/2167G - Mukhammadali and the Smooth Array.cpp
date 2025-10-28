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

    vector<ll>c(n);
    vector<ll>a(n);

    forl(i,n)cin>>a[i];

    forl(i,n)cin>>c[i];

    vector<ll>dp(n+1,0);

    for1(i,n)dp[i]=c[i-1];
    
    for1(i,n){

        for1(j,i-1){
            if(a[j-1]<=a[i-1]){

                dp[i]=max(dp[i],dp[j]+c[i-1]);
            }
        }

        // cout<<dp[i]<<space;
    }

    // cout<<endl;

    ll ans=*max_element(dp.begin(),dp.end());

    ll cost=accumulate(c.begin(),c.end(),0LL);

    cout<<cost-ans<<endl;



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
