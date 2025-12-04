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

bool check(vector<ll>&q, vector<ll>&r, ll m, ll k){

    ll n=q.size();

    forl(i,m){
        
        if((q[(n-m)+i]+1)*(r[i]+1)-1 > k)return 0;
    }

    return 1;

}


void mine(){

    ll n,k; cin>>n>>k;

    vector<ll>q(n);
    vector<ll>r(n);

    forl(i,n)cin>>q[i];
    forl(i,n)cin>>r[i];

    sort allr(q);
    sort all(r);


    ll cnt=0;
    
    ll l1=0,r1=n;

    ll ans=0;

    while(l1<=r1){
        ll mid=(l1+r1)/2;

        if(check(q,r,mid,k)){
            ans=max(ans,mid);
            l1=mid+1;
        }else r1=mid-1;
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
