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

// const ll mxN=1000003;
// ll fact[mxN], inv[mxN];

// ll binPower(ll a, ll n){
//     a%=mod;
//     ll ans=1;
//     while(n>0){
//         if(n%2){
//             ans=(ans*a)%mod;
//         }
//         a=a*a%mod;
//         n/=2;
//     }
//     return ans;
// }
// void factInvCal(ll mx){
//     //factorial
//     fact[0]=1;
//     for1(i,mx-1){
//         fact[i]=(fact[i-1]*i)%mod;
//     }
//     inv[mx-1]=binPower(fact[mx-1], mod-2);
//     for(int i=mx-2; i>=0; i--){
//         inv[i]=(inv[i+1]*(i+1))%mod;
//     }
// }
// ll nCr(ll n, ll r){
//     if(r>n)return 0;
//     ll denom=(inv[r]*inv[n-r])%mod;
//     return (fact[n]*denom)%mod;
// }
ll nCr(ll n, ll r){
    if (r>n)return 0;
    ll res=1;
    for (ll i=1; i<=r; i++){
        res=res*(n-r+i)/i;
    }
    return res;
}

void mine(){

    ll n,k; cin>>n>>k;

    vector<ll>darrangment ={1,0,1,2,9};

    ll ans=0;

    for(ll i=0; i<=k; i++){

        ll times=nCr(n,i);

        ans+=times*darrangment[i];

    }   

    cout<<ans<<endl;

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
