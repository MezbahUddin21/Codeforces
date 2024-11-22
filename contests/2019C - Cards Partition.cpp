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
    ll n,k; cin>>n>>k;

    ll sum=0;

    ll l=n;
    ll mx=0;

    vector<ll>v(n);

    forl(i,n){
        cin>>v[i];
        mx=max(mx,v[i]);
        sum+=v[i];
    }

    int ans=0;

    for(int i=1; i<=n; i++){
        l=(sum+k)/i;

        if(l<mx or l*i<sum)continue;
        ans=i;
    }

    cout<<ans<<endl;

    
}


 
int main() {
    int t;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
