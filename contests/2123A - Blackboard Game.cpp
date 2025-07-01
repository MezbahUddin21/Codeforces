#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 998244353
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
const int N=1e5+4;
int pof2[N];

void mine(){

    int n; cin>>n;

    if(n%4==0)cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
    

}

int main()
{
    int t=1; 
    cin>>t;
    
    // int c=1;

    pof2[0]=1;

    for1(i,N){
        pof2[i]=pof2[i-1]+pof2[i-1];
        pof2[i]%=mod;
    }
    
    while(t--){
        
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }

    return 0;
}
