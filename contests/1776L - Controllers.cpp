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

    string s; cin>>s;

    ll plus=0,minus=0;

    forl(i,n){
        if(s[i]=='+')plus++;
        else minus++;
    }

    ll less=min(plus,minus);
    ll maxx=max(plus,minus);
    
    ll q; cin>>q;


    while(q--){

        ll a,b; cin>>a>>b;

        ll l=0,r=less;

        bool f=1;

        while(l<=r){
            ll mid=(l+r)/2;

            ll p=(less-mid)*(max(a,b));
            ll m=(maxx-mid)*(min(a,b));

            if(p==m){
                pyes
                f=0;
                break;
            }

            if(p>m){
                l=mid+1;
            }else{
                r=mid-1;
            }

        }

        if(f)pno
    }






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
