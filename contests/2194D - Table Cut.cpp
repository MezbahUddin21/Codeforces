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

    ll n,m; cin>>n>>m;

    vector<vector<ll>>v(n+1,vector<ll>(m+1,0));

    ll ans=0;

    for1(i,n){
        for1(j,m){

            cin>>v[i][j];

            ans+=v[i][j];
        }
    }


    ll left=ans/2, right=(ans+1)/2;

    cout<<left*1LL*right<<endl;


    if(left*1LL*right==0){

        for1(i,n)cout<<'D';
        for1(i,m)cout<<'R';
        cout<<endl;
        return;

    }

ll cnt=0;
 
    for1(i,n){
        for(ll j=m; j>=1; j--){
            cnt+=v[i][j];
 
            if(cnt==left){
 
                // cout<<j<<endl;
 
                for1(a,i-1)cout<<"D";
                for1(a,j-1)cout<<'R';
                cout<<'D';
 
                for(int a=j; a<=m; a++)cout<<'R';
                for(int a=i+1; a<=n; a++)cout<<'D';
                cout<<endl;
                return;
            }
 
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
