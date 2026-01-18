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

    set<ll>st;

    forl(i,n){
        ll x; cin>>x;

        st.insert(x);
    }


    vector<ll>v;

    for(auto it:st)v.pb(it);


    v.pb(1000000000000);

    n=v.size();

    ll longest=0;

    ll cnt=0;

    forl(i,n-1){
        if(v[i]-v[i+1]==-1)cnt++;
        else {
            longest=max(longest,cnt);
            cnt=0;
        }
    }

    longest=max(longest,cnt);

    cout<<longest+1<<endl;
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
