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

void mine(){

    int n; cin>>n;

    vector<pair<int,int>>v;

    forl(i,n){
        int l,r; cin>>l>>r;
        v.pb({l,1});
        v.pb({r+1,-1});
    }

    sort all(v);

    vector<int>cnt(2*n+10,0);

    for(int i=0; i<2*n; i++){
        if(i>0 and v[i].first==v[i-1].first){
            cnt[i-1]+=v[i].second;

        }else{
            cnt[i]+=v[i].second;

        }
        if(cnt[i]>=3){
            pno
            return;
        }
    }


    for(int i=1; i<2*n+4; i++){
        cnt[i]+=cnt[i-1];
    }
    
   
    for(auto it:cnt){
        if(it>=3){
            pno
            return;
        }
    }

    pyes




}

int main() {
    fast;
    ll t = 1;
    // cin>>t;
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
