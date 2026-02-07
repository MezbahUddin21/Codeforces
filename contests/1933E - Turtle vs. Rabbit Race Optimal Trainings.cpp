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
    
    int n; cin>>n;

    vector<int>v(n+1,0);

    for1(i,n)cin>>v[i];
     
    for1(i,n)v[i]+=v[i-1];

    // for1(i,n)cout<<v[i]<<space;

    // cout<<endl;

    int q; cin>>q;

    while(q--){

        int l,u; cin>>l>>u;

        int r=n;

        ll ans=l;

        int start=l;

        while(l<=r){
            ll mid=(l+r)/2;

            if(v[mid]-v[start-1]<=u){
                l=mid+1;
                ans=mid;
            }else{
                r=mid-1;
            }

        }

        if(ans<n and abs(u-(v[ans]-v[start-1]))>=abs(u-(v[ans+1]-v[start-1]))){
            ans++;
        }

        cout<<ans<<space;
    }
    cout<<endl;


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
