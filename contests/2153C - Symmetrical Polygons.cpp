#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1e9+7
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

/*


*/

void mine(){

    

    ll n; cin>>n;

    vector<ll>v(n);

    map<ll,ll>mp;




    forl(i,n){
        cin>>v[i];
        mp[v[i]]++;
    }

    ll ans=0;
    ll prev=0,cur=0;
    ll sum=0;

    for(auto it:mp){

        ll c=(it.second/2)*2;
        sum+=it.first*c;

        if(it.second%2){
            prev=cur;
            cur=it.first;
        }

        if(2*it.first<sum+prev+cur)ans=max(ans,sum+prev+cur);
        
        // while(c--)check.pb(it.first);
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

