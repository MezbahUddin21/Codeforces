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

    ll n,q; cin>>n>>q;

    vector<ll>c(n+1);
    for1(i,n)cin>>c[i];
    vector<ll>cnt(n+1,0);

    for1(i,n)if(c[i]==1)cnt[i]=1;

    for1(i,n)cnt[i]+=cnt[i-1];

    for1(i,n)c[i]+=c[i-1];


    while(q--){
        ll l,r; cin>>l>>r;


        ll sum=c[r]-c[l-1];

        if(sum-(r-l+1)>=cnt[r]-cnt[l-1] and (r-l+1)>1){
            pyes
            continue;
        }
        pno
    }






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
