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
    first row 1 to n

    2nd row, n+1 to 2n


*/

void mine(){

    int n; cin>>n;

    vector<vector<int>>v(n,vector<int>(n));

    int time=1;

    forl(i,n){
        forl(j,n){

            v[i][j]=time++;

        }
    }

    ll ans=0;

    forl(i,n){
        forl(j,n){

            ll cur=0;

            if(i-1>=0)cur+=v[i-1][j];
            if(i+1<n)cur+=v[i+1][j];
            if(j-1>=0)cur+=v[i][j-1];
            if(j+1<n)cur+=v[i][j+1];

            cur+=v[i][j];

            ans=max(ans,cur);

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
