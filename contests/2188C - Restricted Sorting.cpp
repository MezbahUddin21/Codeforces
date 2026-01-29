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

    an array a of n

    for k,
        if possible to sort a in non-desc by,
        
        select 2 ind i and j
                    |ai-aj|>=k

                    swap(ai, aj)

        largest piggy int k

*/

void mine(){

    ll n; cin>>n;

    vector<ll>v(n);

    forl(i,n)cin>>v[i];

    vector<ll>vv=v;
    sort all(vv);

    ll mn=INT_MAX;
    ll mx=0;

    forl(i,n){
            mn=min(v[i],mn);
            mx=max(v[i],mx);
    }

    ll ans=INT_MAX;

    forl(i,n){
        if(vv[i]!=v[i]){
            ans=min(ans,max(abs(mn-v[i]),abs(mx-v[i])));
        }
    }

    if(ans==INT_MAX){
        cout<<-1<<endl;
        return;
    }
    cout<<ans<<endl;




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
