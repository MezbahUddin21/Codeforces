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

    vector<ll>a(n+1);

    vector<ll>b(n+1);

    for1(i,n)cin>>a[i];

    for1(i,n)cin>>b[i];

    vector<ll>preb(n+1,0);


    for1(i,n){
        preb[i]+=preb[i-1]+b[i];
    }

    vector<ll>ans(n+2,0);
    vector<ll>cnt(n+2,0);

    // cout<<222<<endl;

    for1(i,n){
        ll it=lower_bound(preb.begin(),preb.end(),a[i]+preb[i-1])-preb.begin()-1;

        if(it>=i){
            cnt[it+1]-=1;
            cnt[i]+=1;
            // cout<<preb[it]<<endl;
            // cout<<i<<space<<it<<endl;
        }

        // cout<<a[i]+preb[i-1]-preb[it]<<endl;
        ans[it+1]+=a[i]+preb[i-1]-preb[it];



    }


    for1(i,n){
        cnt[i]+=cnt[i-1];

        ans[i]+=cnt[i]*b[i];
    }


    for1(i,n)cout<<ans[i]<<space;

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
