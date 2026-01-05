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

    int n,m; cin>>n>>m;

    ll len=0;

    vector<int>cnt(m+1,0);

    vector<vector<int>>v;

    forl(i,n){
        vector<int>vc;
        int l; cin>>l;

        len+=l;

        forl(j,l){
            int x; cin>>x;

            cnt[x]++;
            vc.pb(x);
        }

        v.pb(vc);

    }

    int sum=accumulate(cnt.begin(),cnt.end(),0);

    for1(i,m)if(cnt[i]==0){
        pno
        return;
    }

    int c=1;

    forl(i,n){
        bool f=0;
        for(int j=0; j<v[i].size(); j++){
            cnt[v[i][j]]--;
            if(cnt[v[i][j]]<=0){
                f=1;
            }
        }
        if(!f)c++;

        for(int j=0; j<v[i].size(); j++){
            cnt[v[i][j]]++;
        }
    }

    if(c>=3)pyes
    else pno
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
