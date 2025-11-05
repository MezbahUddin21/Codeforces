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
#define ll long long int
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


void mine(){

    ll n; cin>>n;

    vector<ll>v(n);

    forl(i,n)cin>>v[i];

    ll nd=v[0];

    forl(i,n)nd&=v[i];

    // cout<<nd<<endl;

    ll ans=1;

    for(ll i=1; i<=n-2; i++){
        ans*=i;
        ans%=mod;
    }

    ll cnt=0;

    forl(i,n){
        cnt+=(v[i]==nd);    
    }

    // cout<<cnt<<endl;

    ll comb=cnt*(cnt-1)/2;

    comb%=mod;

    ans*=comb*2;

    ans%=mod;

    cout<<ans<<endl;

    // cout<<ans<<endl;
    



}

int main() {
    fast;
    ll t = 1; 
    cin>>t;
    // int c=1;
    while (t--){
        // cout<<"Case "<<c<<":"<<endl; c++;
        mine();
    }
    return 0;
}
