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

/*

    you want to buy n items

    i has a price ai such that 1<=ai<=x

    loyalty level is defined as s/x

    s is the toal cost of items

    buying an item with p makes loyalty increase
        and earn p bonus points

    find the max bonus points choosing any optimal order



*/

void mine(){

    ll n,x; cin>>n>>x;

    vector<ll>v(n);

    ll sum=0;

    forl(i,n){
        cin>>v[i];
        sum+=v[i];
    }

    sort all(v);

    vector<ll>ans;

    ll rem=0;
    
    ll i=0,j=n-1;

    ll points=0;

    while(sum){
        if((sum-v[j])/x!=sum/x){
            sum-=v[j];
            points+=v[j];
            ans.pb(v[j]);
            j--;
        }else{
            ans.pb(v[i]);
            sum-=v[i];
            i++;
        }
    }

    cout<<points<<endl;
    
    reverse(ans.begin(),ans.end());

    forl(i,n)cout<<ans[i]<<space;
    cout<<endl;

    

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
