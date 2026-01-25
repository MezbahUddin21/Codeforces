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

    vector<ll>v(n);
    forl(i,n)cin>>v[i];

    vector<ll>vv;

    vv=v;


    ll mx=0;
    ll ind;

    ll start=-1;

    forl(i,n){
        if(v[i]>mx and i+v[i]!=n){
            mx=v[i];
            ind=i;
        }


        if(i+v[i]!=n and start==-1){
            start=i;
        }
    }



    if(start<=ind and start!=-1)reverse(v.begin()+start,v.begin()+ind+1);

    // if(vv>v){
    //     swap(vv,v);
    // }

    forl(i,n)cout<<v[i]<<space;

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
