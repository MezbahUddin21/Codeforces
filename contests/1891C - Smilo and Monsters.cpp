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

    n hordes of mosters,
    ith horde contains ai monsters
        goal is to destroy all monsters
    
    2 types of attacks and a combo x==0,

        1. i from 1 to n with at least 1 monster, x++
        2. i from 1 to n with at least x monster, x=0

    find the min no of attacks needed
*/


void mine(){

    ll n; cin>>n;

    vector<ll>v(n);

    forl(i,n)cin>>v[i];

    sort all(v);

    ll sum=accumulate(v.begin(),v.end(),0LL);

    ll ans=(sum+1)/2;

    ll lim=sum/2;

    ll i=n-1;


    while(lim>0){
        lim-=v[i--];
        ans++;
    }
        


    

    cout<<ans<<endl;


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
