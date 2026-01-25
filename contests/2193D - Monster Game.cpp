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

    vector<ll>a(n+1,0);
    for1(i,n)cin>>a[i];

    vector<ll>b(n+1,0);

    for1(i,n)cin>>b[i];

    sort all(a);

    vector<ll>pref(n+1,0);

    for1(i,n)pref[i]+=pref[i-1]+b[i];

    // for1(i,n)cout<<pref[i]<<space;

    // cout<<endl;


    ll score=0;

    for1(i,n){
        ll check=n-i+1;

        ll cnt=lower_bound(pref.begin(),pref.end(),check)-pref.begin();

        // cout<<check<<space;
        // cout<<pref[cnt]<<space;

        if(cnt>n){
            cnt=n;
        }

        if(pref[cnt]>check)cnt--;

        score=max(score,a[i]*cnt);

    }

    cout<<score<<endl;

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
