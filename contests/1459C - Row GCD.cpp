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



void mine(){   

    ll n,m; cin>>n>>m;

    vector<ll>a(n);
    vector<ll>b(m);

    forl(i,n)cin>>a[i];
    forl(i,m)cin>>b[i];

    sort all(a);

    // ll mn=a[0]+b[0];


    ll g1=0;
    forl(i,n){
        g1=__gcd(g1,a[i]-a[0]);
    }

    forl(i,m){
        cout<<__gcd(g1,b[i]+a[0])<<space;
    }

    
}



int main() {
    fast;
    
    ll t = 1; 
    // cin>>t;
    // cin.ignore();
    // ll c=1;
    while (t--) {    
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}



