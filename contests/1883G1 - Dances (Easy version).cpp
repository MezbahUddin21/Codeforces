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

    int n,m; cin>>n>>m;

    vector<int>a(n);

    a[0]=1;

    for1 (i,n-1)cin>>a[i];

    vector<int>b(n);

    forl(i,n)cin>>b[i];

    sort all(a);
    sort all(b);

    int l=0,r=n;

    auto check = [&](int m){
        for(int i=m; i<n; i++){
            if(a[i-m]>=b[i])return 0;
        }

        return 1;
    };

    ll ans=n;

    while(l<=r){
        ll mid=(l+r)/2;

        if(check(mid)){

            ans=min(ans,mid);
            r=mid-1;    
            
        }else{
            l=mid+1;
        } 

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
