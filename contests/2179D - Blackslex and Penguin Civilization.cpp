#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) v.begin(), v.end()
#define allr(v) v.begin(), v.end(),greater<>()
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

    int sz=pow(2,n);

    vector<pair<int,int>>v(sz);

    forl(i,sz){
        v[i].second=i;
    }

    forl(i,sz){
        int bit=i;
        int cnt=0;
        while(bit){
            if(bit&1)cnt++;
            else break;
            bit>>=1;
        }
        v[i].first=cnt;

    }

    sort(all(v), [&](pair<int,int>&a, pair<int,int>&b){
        if(a.first==b.first)return (a.second<b.second);
        else return a.first>b.first;
    });


    forl(i,sz)cout<<v[i].second<<space;
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
