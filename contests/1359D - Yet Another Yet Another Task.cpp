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

ll get(vector<int>c){
    int ans=-LONG_MAX;
    int total=0;
    int mn=0;
    for(auto it:c){
        total+=it;
        ans=max(ans,total-mn);

        mn=min(mn,total);
    }

    return ans;
}

 
 
void mine(){
 
    ll n; cin>>n;
 
    vector<ll>v(n);

    forl(i,n)cin>>v[i];

    ll ans=-LONG_MAX;
    for(int i=-30; i<=30; i++){

        vector<int>c;

        forl(j,n){

            if(v[j]>i){
                ans=max(ans,get(c)-i);
                c.clear();

            }else c.pb(v[j]);
        }

        ans=max(ans,get(c)-i);

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
