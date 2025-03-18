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
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)




void mine(){

    ll n,k; cin>>n>>k;

    vector<ll>v(n);
    

    forl(i,n)cin>>v[i];


    if(k==1){
        ll ans=max(v[0]+*max_element(v.begin()+1,v.end()),v[n-1]+*max_element(v.begin(),v.end()-1));
        cout<<ans<<endl;
        return;
    }


    sortvg;

    ll ans=0;

    for(ll i=0; i<=k; i++){
        ans+=v[i];
    }



    cout<<ans<<endl;
    

}


 
int main() {
    fast;
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
