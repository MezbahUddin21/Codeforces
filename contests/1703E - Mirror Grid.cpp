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

    vector<vector<int>>v(n,vector<int>(n));

    forl(i,n){
        forl(j,n){
            char x; cin>>x;

            v[i][j]=x-'0';
        }
    }


    int res=0, cnt=0;


    forl(i,(n+1)/2){
        forl(j,(n)/2){
            cnt=v[i][j]+v[j][n-i-1]+v[n-i-1][n-j-1]+v[n-j-1][i];

            res+=min(cnt, 4-cnt);
        }
    }

    cout<<res<<endl;


}



int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
