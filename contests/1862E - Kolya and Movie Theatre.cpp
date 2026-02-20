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
    a movie thetre,
     will show a new movie every day ofr n days
     asside the ent value to each movie ai

     decrease in ent value of next movie, if longer stays without visiting a movie 

        decrease = d*cnt (cnt, days since the last vis)
    
    kolya managed to vis another movie theratre a day beforte the new one opened 
*/

void mine(){

    ll n,m,d; cin>>n>>m>>d;

    vector<ll>v(n);

    forl(i,n)cin>>v[i];

    set<pair<ll,ll>> st;
    ll sum = 0,ans=0;

    for (ll i = 0; i < n; i++) {
        ans = max(ans, sum + v[i] - 1LL*d*(i+1));

        if (v[i] > 0) {
            st.insert({v[i],i});
            sum += v[i];

            if (st.size() >= m) {
                sum -= st.begin()->first;
                st.erase(st.begin());
            }
        }
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
