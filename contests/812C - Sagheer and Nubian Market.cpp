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

 
vector<ll>cost;

ll cal(ll sz, vector<ll>v, ll n){
    vector<ll>temp;
    
    ll ans=0;

    for1(i,n){
        temp.pb(i*sz+v[i]);
    }

    sort all(temp);

    forl(i,sz){
        ans+=temp[i];
        // cout<<temp[i]<<space;
    }
    // cout<<endl;

    cost[sz]=ans;



    return ans;
    // return 0;
    

}
 
void mine(){

    ll n,s; cin>>n>>s;

    cost.resize(n+5, 0);

    vector<ll>v(n+1);
    vector<ll>vsort(n+1);

    for1(i,n){
        cin>>v[i];
        vsort[i]=v[i];
    }

    vsort[0]=INT_MAX;

    sort all(vsort);

    ll l=0, r=n+1;
    while(l<=r-2){
        ll mid=(l+r)/2;

        // if(cal(mid,vsort,n)>s){
        //     r=mid;
        // }else l=mid;

        if(cal(mid,v,n)>s){
            r=mid;
        }else l=mid;
    }

    cout<<l<<space<<cost[l]<<endl;
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
