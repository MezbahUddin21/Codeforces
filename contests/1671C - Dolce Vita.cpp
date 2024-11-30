#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"Yes"<<"\n";
#define pno cout<<"No"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


void mine(){
    ll n,x; cin>>n>>x;

    vector<ll>v(n);

    forl(i,n)cin>>v[i];

    sort all(v);

    for(ll i=1; i<n; i++){
        v[i]+=v[i-1];
    }

    auto it=upper_bound(v.begin(),v.end(),x);

    ll ind=it-v.begin();
    ll f=0;


    ll ans=0;

    for(ll i=ind-1; i>=0;i--){
        if(v[i]<=x){
            ans+=(x-v[i])/(i+1)+1;   
        }
    }

    cout<<ans<<endl;


    

}


 
int main() {
    fast;
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
