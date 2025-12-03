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

    ll n; cin>>n;

    vector<ll>v(n+1000,0);

    vector<ll>cnt(n+1000,0);

    for1(i,n){
        cin>>v[i];
        cnt[v[i]]++;
    }


    ll sum=0;

    for1(i,n){

        if(cnt[i]==0)continue;

        if(cnt[i]%i){
            cout<<-1<<endl;
            return;
        }
    }

    // if(sum>n){

    //     cout<<-1<<endl;
    //     return;
    // }

    vector<vector<ll>>vv(n+1000);

    for1(i,n){
        vv[v[i]].pb(i);
    }

    vector<ll>ans(n+1000);
    ll time=1;

    for1(i,n+10){



        ll  cnt=vv[i].size();
        // if(cnt==0)continue;

        // cout<<cnt<<endl;
        int c=0;
        for(auto it:vv[i]){
            c++;
            ans[it]=time;
            if(c%i==0)time++;
        }
    }
   
    for1(i,n)cout<<ans[i]<<space;

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
