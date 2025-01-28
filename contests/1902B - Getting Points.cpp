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
    ll n,p,le,t;
    cin>>n>>p>>le>>t;

    ll f=((n+6)/7); 


    int l=1,r=n;

    ll ans=n;

    while(l<=r){
        ll mid=(l+r)/2;
        if((min(f, 2*mid)*t)+le*mid>=p){
            ans=min(ans,mid);
            r=mid-1;
        }else l=mid+1;
    }

    cout<<n-ans<<endl;

}
 
 
 
 
signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
 
    cin>>t;
 
//    int c=1;
    while(t--){

        // cout<<"Case "<<c<<":"<<endl;c++;
        mine();
    }
    return 0;
}
