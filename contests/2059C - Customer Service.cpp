#include <bits/stdc++.h>
using namespace std;


// Debug..
// #ifndef LOCAL
// #include "debug.h"
// #else
// #define dg(x...)
// #endif

#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) v.begin(), v.end()
#define allr(v) v.begin(), v.end(),greater<>()
#define pyes cout<<"YES"<<"\n";
#define pno cout<<"NO"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)

  

void mine(){

    int n; cin>>n;

    vector<vector<int>>v(n+2,vector<int>(n+2,0));

    for1(i,n){
        for(int j=n; j>0; j--){
            cin>>v[i][j];
        }
    }

    int ans=0;
    vector<int>u;

    for1(i,n){
        int k=0;
        for1(j,n){
            if(v[i][j]==1)k++;
            else break;
        }
        u.pb(k);
    }
    sort(all(u));
    for(auto x:u){
        if(x>=ans)ans++;
    }

    cout<<ans<<endl;
}



int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
