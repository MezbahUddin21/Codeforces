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




void mine(ll n){
    if(n==2){
        cout<<1<<endl;
        cout<<n<<endl;
        return;
    }
    ll cnt,l;
    ll mx=0;
    ll mxi=0;
    for(ll i=2; i*i<=n; i++){
        cnt=0,l=n;
        while(l%i==0){
            l/=i;
            cnt++;
        }
        if(cnt>mx){
            mx=cnt;
            mxi=i;
        }
    }
    if(mxi==0){
        cout<<1<<endl;
        cout<<n<<endl;
        return;
    }
    cout<<mx<<endl;
    mx--;
    while(mx--){
        cout<<mxi<<space;
        n/=mxi;
    }

    cout<<n<<endl;

    
}



 
signed main() {
    ll t; cin>>t;

    while(t--){
    ll n; cin>>n;
        mine(n);
    }
    return 0;
}


