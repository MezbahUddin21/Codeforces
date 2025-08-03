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


ll check(int n,int m){
    ll ans=0;
    while(n>1){
        n=(n+1)/2;
        ans++;
    }

    while(m>1){
        m=(m+1)/2;
        ans++;
    }

    return ans;
}

void mine(){

    ll n,m,a,b; cin>>n>>m>>a>>b;

    ll ans=1e18;

    ans=min(ans,check(n,b));
    ans=min(ans,check(n,m-b+1));
    ans=min(ans,check(a,m));
    ans=min(ans,check(n-a+1,m));





    cout<<ans+1<<endl;
    
}





signed main() {
    ios::sync_with_stdio(0),cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;

// int c=1;
    while(t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}


