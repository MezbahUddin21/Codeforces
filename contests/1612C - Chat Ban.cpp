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


ll N;

ll cal(ll n){

    return (n*(n+1)/2);
}

ll cal1(ll n){

    ll rim = N-n+1;

    return (N*(N+1))-(rim*(rim+1)/2);
}

void mine(){
    ll k,x; cin>>k>>x;

    ll l=1,r=k;

    ll ans=0;

    N=k;

    while(l<=r){
        ll mid=(l+r)/2;

        if(cal(mid)<=x+mid-1){
            ans=max(ans,mid);
            l=mid+1;
        }else r=mid-1;

    }

    if(ans<k){
        cout<<ans<<endl;
        return;
    }



    l=1,r=k-1;

    while(l<=r){
        ll mid=(l+r)/2;

        if(cal1(mid)<=x+mid-2){
            ans=max(ans,mid+k);
            l=mid+1;
        }else r=mid-1;

    }

    cout<<ans<<endl;


}


 
int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
