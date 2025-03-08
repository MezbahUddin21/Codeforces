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

    vector<int>v(n);

    forl(i,n)cin>>v[i];

    int a=0;

    forl(i,n){
        if(v[i]%5==0){
            v[i]+=v[i]%10;
            a=1;
        }
    }

    if(a==1){
        sort(all(v));
        if(v[0]==v[n-1])pyes
        else pno

        return;
    }

    bool ok=0,ok2=0;

    forl(i,n){
        
        while(v[i]%10!=4){
            v[i]+=(v[i]%10);

        }

        if(v[i]%20==4)ok=1;
        else ok2=1;


    }

    if(ok and ok2)pno
    else pyes




}



int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
