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

    ll n,k; cin>>n>>k;

    vector<ll>v(n);

    forl(i,n)cin>>v[i];

    sort all(v);


    ll l=v[0]*2-5, r= v[n-1]*2+5;

    ll ans=0;

    auto check= [&](ll mid){

        ll cnt=0;
        forl(i,n){

            cnt+=(upper_bound(v.begin(),v.end(),(mid-v[i]))-v.begin());

            if(cnt>=k) return 1;

        }

        return 0;
    };

    while(l<=r){

        ll mid=(l+r)/2;       
        
        if(check(mid)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
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
