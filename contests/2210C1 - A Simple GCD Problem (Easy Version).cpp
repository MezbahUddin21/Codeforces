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

ll lcm(ll x, ll y){

    ll g=__gcd(x,y);

    return (x*y)/g;

}

void mine(){

    ll n; cin>>n;

    vector<ll>a(n+4,0);
    vector<ll>b(n+4,0);

    for1(i,n)cin>>a[i];
    for1(i,n)cin>>b[i];

    ll cnt=0;

    for1(i,n){

        ll g1=__gcd(a[i-1],a[i]);
        ll g2=__gcd(a[i],a[i+1]);

        ll lc=lcm(g1,g2);

        if(i==1){
            if(g2<a[i]){
                a[i]=g2;
                cnt++;
                continue;
            }
        }

        if(i==n){
            if(g1<a[i]){
                a[i]=g1;
                cnt++;
                continue;
            }
        }

        if(lc<a[i]){
            a[i]=lc;
            cnt++;
        }



    }

    cout<<cnt<<endl;







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
