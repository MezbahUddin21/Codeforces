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
    ll q; cin>>q;

    vector<ll>v(2*n+1);

    for1(i,n)cin>>v[i];
    for1(i,n)v[i+n]=v[i];

    vector<ll>pref(2*n+1,0);

    for1(i,2*n)pref[i]+=pref[i-1]+v[i];

    // for(auto it:pref)cout<<it<<space;

    // cout<<endl;


    while(q--){

        ll l,r; cin>>l>>r; l--,r--;
        
        ll left=l/n,right=r/n;

        l=l%n,r=r%n;


        ll ans =pref[n]*(right-left+1);

        ans-=(pref[left+l]-pref[left]);

        ans-=(pref[right+n]-pref[right+r+1]);


        cout<<ans<<endl;

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
