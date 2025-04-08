#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"yes"<<"\n";
#define pno cout<<"no"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)



void mine(){
    ll n,k; cin>>n>>k;

    vector<ll>v(n);

    forl(i,n)cin>>v[i];

    ll cnt=1;

    ll ans=0;

    for(ll i=1; i<n; i++){
        if(abs(v[i]-v[i-1])<=k){
            cnt++;
        }else{
            ans=max(ans,cnt);
            cnt=1;
        }
    }

    ans=max(ans,cnt);

    cout<<ans<<endl;


    
}

int main()
{
    int t=1; 
    // cin>>t;
    
    // int c=1;
    
    while(t--){
        
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }

    return 0;
}
