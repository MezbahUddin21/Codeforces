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

    ll n,h,k; cin>>n>>h>>k;

    vector<ll>v(n+1);
    v[0]=INT_MAX;
    for1(i,n){
        cin>>v[i];
    }


    vector<ll>pre(n+1);

    for1(i,n){
        pre[i]+=v[i]+pre[i-1];
        // cout<<v[i]<<space;
    }
    // cout<<endl;

    ll ans=(h/pre[n])*(n+k);

    h=h%pre[n];

    if(h==0){
        cout<<ans-k<<endl;
        return;
    }
    
    vector<ll>mx(n+1);

    for(int i=n-1; i>=1; i--){
        mx[i]=max(mx[i+1],v[i+1]);
    }

    ll mn=INT_MAX;

    for1(i,n){
        mn=min(mn,v[i]);

        mx[i]-=mn;

        mx[i]=max(mx[i],0LL);
    }

    for1(i,n){
        h-=v[i];
        if(mx[i]>=h){
            ans+=i;
            break;
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
