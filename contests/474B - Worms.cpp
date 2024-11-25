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


const int mx=1e6+5;
int a[mx];

void mine(){

    mem(a,0);

    a[1]=1;
    int sum=0;
    
    int n; cin>>n;
    int prev=0;

    for1(i,n){
        int x; cin>>x;
        prev+=x;
        a[prev+1]=1;
        sum+=x;

    }

    for(int i=1; i<=sum; i++){
        a[i]+=a[i-1];
    }

    // for(int i=1; i<=25; i++){
    //     cout<<a[i]<<space;
    // }cout<<endl;

    int m; cin>>m;

    for(int i=1; i<=m; i++){
        int x; cin>>x;
        cout<<a[x]<<endl;
    }

}


 
int main() {
    int t=1;
    // cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
