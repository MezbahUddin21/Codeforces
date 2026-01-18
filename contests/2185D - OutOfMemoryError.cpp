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

    ll m; cin>>m;
    ll h; cin>>h;

    vector<ll>a(n+1);
    vector<ll>ac;

    vector<int>flag(n+1,0);

    for1(i,n)cin>>a[i];
    ac=a;

    // bool flag=0;

    ll cnt=0;

    // vector<pair<ll,ll>>check;
    int f=0;

    while(m--){
        ll b,c; cin>>b>>c;
        // cnt++;
        // check.pb({b,c});

        if(f>flag[b]){
            flag[b]=f;
            a[b]=ac[b];

            a[b]+=c;

            if(a[b]>h){
                f++;
                a[b]=ac[b];
                flag[b]=f;
                cnt=0;
            }
        }else{
            a[b]+=c;
            if(a[b]>h){
                f++;
                a[b]=ac[b];
                flag[b]=f;
                cnt=0;
            }
            // flag[b]++;
        }

    }


    for1(i,n){
        if(f>flag[i]){
            a[i]=ac[i];
        }
    }





    for1(i,n)cout<<a[i]<<space;
    cout<<endl;



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
