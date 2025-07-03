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

void mine(){

    ll n; cin>>n;

    vector<ll>v(n);

    forl(i,n)cin>>v[i];


    ll cnt=0;

    for(ll i=n-2; i>=0; i--){
        // if(v[i]<=v[i+1])continue;

        ll ct=(v[i]-1)/v[i+1];

        cnt+=ct;
        
        v[i]=v[i]/(ct+1);

        

    }

    cout<<cnt<<endl;

    // cout<<log2(4/1)<<endl;

}

int main()
{
    int t=1; 
    cin>>t;
    
    // int c=1;


    
    while(t--){
        
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }

    return 0;
}
