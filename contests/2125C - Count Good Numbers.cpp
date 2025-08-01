#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000003
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
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

 
void mine(){
    
    ll l,r; cin>>l>>r;

    vector<int>pr={2,3,5,7};
    ll ans=0;

    for(int i=0; i<16; i++){
        ll p=1;

        int cnt=0;

        for(int j=0; j<4; j++){
            if(i>>j&1){
                p*=pr[j];   
                cnt++;

            }
        }
    
        if(cnt%2){
            ans-=r/p-(l-1)/p;
        }else ans+=r/p-(l-1)/p;

        

    }

    cout<<ans<<endl;


}
 
int main() {
    fast;
    
    ll t = 1; 
    cin>>t;
    // ll c=1;
    while (t--) {

        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
