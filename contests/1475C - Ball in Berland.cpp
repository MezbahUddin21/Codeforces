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

    ll aa,bb,k; cin>>aa>>bb>>k;

    ll n=k;
    vector<ll>a(n);
    vector<ll>b(n);

    forl(i,n)cin>>a[i];
    forl(i,n)cin>>b[i];


    map<ll,set<ll>>mpa;

    map<ll,set<ll>>mpb;

    forl(i,n){
        mpa[a[i]].insert(i);
    }

    forl(i,n){
        mpb[b[i]].insert(i);
    }

    map<pair<ll,ll>,ll>mpp;

    forl(i,n){
        mpp[make_pair(a[i],b[i])]++;
    }

    ll ans=0; 

    forl(i,n){

        mpa[a[i]].erase(mpa[a[i]].begin());

        ll cnt=-1LL*mpa[a[i]].size();

        // cout<<cnt<<space;

        
        mpb[b[i]].erase(mpb[b[i]].begin());

        cnt+=(n-1-i-(mpb[b[i]].size()));

        // cout<<cnt<<space;

        mpp[make_pair(a[i],b[i])]--;

        cnt-=mpp[make_pair(a[i],b[i])];

        // cout<<cnt<<endl;

        ans+=cnt;

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
