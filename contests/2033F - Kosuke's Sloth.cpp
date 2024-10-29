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

    if(k==1){
        cout<<n%mod<<endl;
        return;
    }

    ll a=1,b=1;
    ll cnt=2;
    
    while(1){
        ll c=(a+b)%k;
        cnt++;
        if(c==0){
            cout<<((n%mod)*cnt)%mod<<endl;
            return;
        }
        a=b;
        b=c;
    }
}



 
signed main() {
    int t;
    cin>>t;

   
    while(t--){
        mine();
    }
    return 0;
}


