#include <bits/stdc++.h>
using namespace std;
// #define endl '\n'
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

   cout<<1<<space<<1<<space<<n<<endl;

   int x; cin>>x;

   cout<<2<<space<<1<<space<<n<<endl;

   int y; cin>>y;

   int len=y-x;

   int l=1,r=n;

   while(l<r){

    ll mid=(r+l)/2;

    cout<<1<<space<<l<<space<<mid<<endl;
    int a; cin>>a;

    cout<<2<<space<<l<<space<<mid<<endl;
    int b; cin>>b;

    if(b-a==0)l=mid+1;
    else r=mid;

   }


   cout<<'!'<<space<<r<<space<<r+len-1<<endl;


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
