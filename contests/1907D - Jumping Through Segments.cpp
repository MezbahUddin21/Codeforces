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


*/

int check(vector<pair<int,int>>&v, int m){

    int n=v.size();

    int l=0,r=0;

    forl(i,n){
        l-=m,r+=m;

        l=max(l,v[i].first);
        r=min(r,v[i].second);

        if(l>r)return false;

    }

    return true;

}

void mine(){

    int n; cin>>n;

    vector<pair<int,int>>v;

    forl(i,n){
        int l,r; cin>>l>>r;

        v.pb({l,r});
    }

    // sort all(v);


    int s=0,e=1e9+10;

    ll ans=INT_MAX;

    while(s<=e){
        
        ll mid=(s+e)/2;

       
        if(check(v,mid)){
            e=mid-1;
            ans=min(ans,mid);

        }else{

            s=mid+1;

        }

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
