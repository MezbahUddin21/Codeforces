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




void mine(){
    int xa,xb,xc; cin>>xa>>xb>>xc;
    int ya,yb,yc; cin>>ya>>yb>>yc;

    ll ans = min(xc,yb)*2;

    xc-=min(xc,yb);

    yb-=min(xc,yb);

    ans-=2*max(0,yc+xb-(xa+xb+xc));

    cout<<ans<<endl;

}



 
signed main() {
    int t=1;
    cin>>t;

    // int c=1;

   
    while(t--){
        // cout<<"Case "<<c<<": ";
        mine();
        // c++;
    }
    return 0;
}


