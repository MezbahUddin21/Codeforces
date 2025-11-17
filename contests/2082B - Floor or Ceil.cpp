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

    ll x; cin>>x;
    ll n,m; cin>>n>>m;

    n=min(n,100LL); m=min(m,100LL);

    ll cx=x;
    ll cn=n,cm=m;

    ll ccx=x;
    ll ccn=n,ccm=m;
    

    ll div=2;

    while((n or m) and x){
        if(m){
            m--;
            x=(x+1)/div;
        }else if(n){
            n--;
            x=(x/div);
        }
    }

    cout<<x<<space;

    ll mx=0;



    while((cm or cn) and cx){

        if((cx%div)==0 and cn){
            cn--;
            cx/=div;
        }else if(cm){
            cm--;
            cx=(cx+1)/div;
        }else if(cn){
            cn--;
            cx=cx/div;
        }

    }

    mx=max(mx,cx);

    while((ccm or ccn) and ccx){

        if(ccn){
            ccn--;
            ccx/=div;
        }else if(ccm){
            ccm--;
            ccx=(ccx+1)/div;
        }

    }

    mx=max(mx,ccx);

    cout<<mx<<endl;

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
