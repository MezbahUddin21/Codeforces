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
 n machines arranged in a circle 
  n is at most 20

  either of A or B

  machines are numbered for 1 to n



*/

void mine(){

    int n,q; cin>>n>>q;

    string s; cin>>s;

    int total=0;

    bool f=0;

    forl(i,n){
        if(s[i]=='A'){
            total++;
        }else{
            f=1;
            break;
        }
    }

    if(!f){
        while( q--){
            ll a; cin>>a;
            ll ans=0;

            ans+=a;
            cout<<ans<<endl;

        }

    }
    else{

        while(q--){
            ll ans=0;

            ll a; cin>>a;
            ll i=0;
            while(a){
                if(s[i]=='A')a--;
                else{
                    a/=2;
                }
                ans++;
                if(a==0){
                    break;
                }

                if(a!=0 and i==n-1){
                    i=0;
                    continue;
                }
                i++;
            }

            cout<<ans<<endl;
        }

    }




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
