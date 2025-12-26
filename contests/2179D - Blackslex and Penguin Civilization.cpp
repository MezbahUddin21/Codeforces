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

    vector<int>v(sz);

    forl(i,sz){
        v[i]=i;
    }

    vector<int>p(sz);

    forl(i,sz){
        int bit=i;

        while(bit){
            if(bit&1)p[i]++;
            else break;
            bit>>=1;
        }
    }

    // forl(i,sz)cout<<p[i]<<space;

    // cout<<endl;

    stable_sort(all(v), [&](int l, int r){
        return p[l]>p[r];
    });

    // forl(i,sz)cout<<p[i]<<space;

    // cout<<endl;

    forl(i,sz)cout<<v[i]<<space;
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
