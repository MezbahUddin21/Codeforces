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
    int n,m,x,y; cin>>n>>m>>x>>y;

    cout<<x<<space<<y<<endl;

    for1(i,m){
        if(i!=y)cout<<x<<space<<i<<endl;
    }

    int f=1;

    for1(i,n){
        if(i!=x){
            if(f){
                for(int j=m; j>=1; j--)cout<<i<<space<<j<<endl;
            }else{
                for(int j=1; j<=m; j++)cout<<i<<space<<j<<endl;
            }
            f=1-f;
            }
    }
    
}



 
signed main() {
    int t=1;
    // cin>>t;

    // int c=1;

   
    while(t--){
        // cout<<"Case "<<c<<": ";
        mine();
        // c++;
    }
    return 0;
}


