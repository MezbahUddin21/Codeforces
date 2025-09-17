#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1e9+7
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin()+1, v.end(),greater<>())
#define pyes cout<<"yes"<<"\n";
#define pno cout<<"no"<<"\n";
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

    vector<ll>a(n+1);
    vector<ll>b(k);

    for1(i,n)cin>>a[i];

    forl(i,k)cin>>b[i];


    sort allr(a);

    sort all(b);



    ll cost=0;

    ll l=0;

    forl(i,k){

        if(l+b[i]>n)break;

        a[l+b[i]]=0;
        l=l+b[i];

    }


    // for1(i,n)cout<<a[i]<<space;
    // cout<<endl;
    

    for1(i,n)cost+=a[i];


    cout<<cost<<endl;




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
