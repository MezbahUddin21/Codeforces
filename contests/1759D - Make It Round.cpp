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

    ll n,m; cin>>n>>m;

    ll nn=n;

    ll c2=0,c5=0;

    while(n%2==0 and n>0){
            n/=2;
            c2++;
    }

    while(n%5==0 and n>0){
            n/=5;
            c5++;
    }

    ll k=1;

    // cout<<c2<<space<<c5<<endl;

    while(c5>c2 and k*2<=m){
        k*=2;
        c2++;
    }

    while(c2>c5 and k*5<=m){
        k*=5;
        c5++;
    }

    while(k*10<=m)k*=10;

    // cout<<k<<endl;

    if(k==1){
        cout<<m*nn<<endl;
        return;
    }


    cout<<k*(m/k)*nn<<endl;

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
