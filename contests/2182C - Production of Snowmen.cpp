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

    vector<ll>a(n+1);
    vector<ll>b(n+1);
    vector<ll>c(n+1);
    
    for1(i,n)cin>>a[i];
    for1(i,n)cin>>b[i];
    for1(i,n)cin>>c[i];

    ll i=0,j=0,k=0;
    ll cnt=0;

    ll first=0,second=0;

    for(ll i=0; i<n; i++){

        bool f=1;
        for(ll j=1; j<=n; j++){
            ll nowi=i+j;
            if(nowi>n)nowi-=n;
            if(a[j]>=b[nowi]){
                f=0;
                break;
            }

        }

        if(f)first++;
    }

    for(ll i=0; i<n; i++){
        bool f=1;
        for(ll j=1; j<=n; j++){
            ll nowi=i+j;
            if(nowi>n)nowi-=n;
            if(b[j]>=c[nowi]){
                f=0;
                break;
            }

        }

        if(f)second++;
    }

    // cout<<first<<space<<second<<endl;
    // // first++;
    // // second++;

    // if(first!=0 or second!=0)first++,second++;


    cout<<first*second*n<<endl;


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
