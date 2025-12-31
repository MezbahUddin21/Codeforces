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
ll mx=4*10000+10;

vector<ll>fnl;
vector<ll>dp(mx,0);

bool isPal(int x){

    vector<int>v;

    while(x){
        v.pb(x%10);
        x/=10;
    }

    forl(i,v.size()){
        if(v[i]!=v[v.size()-i-1])return 0;
    }

    return 1;
}


void mine(){

    ll n; cin>>n;

    cout<<dp[n]<<endl;



}

int main() {
    fast;

    dp[0]=1;

    ll mx=4*10000;

    for1(i,mx){
        if(isPal(i))fnl.pb(i);
    }

    sort all(fnl);



    for(int i=0; i<fnl.size(); i++){

        // cout<<fnl[i]<<space;

        for(ll j=fnl[i]; j<=mx; j++){
            dp[j]+=dp[j-fnl[i]];
            dp[j]%=mod;
        }
    }

    ll t = 1;
    cin>>t;
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
