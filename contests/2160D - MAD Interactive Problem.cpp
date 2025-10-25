#include <bits/stdc++.h>
using namespace std;
// #define endl '\n'
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

int query(vector<int>b){
    cout<<"? ";
    cout<<b.size()<<space;
    for(auto it:b){
        cout<<it<<space;
    }
    cout<<endl;
    int x; cin>>x;
    return x;
}

void mine(){

    int n; cin>>n;

    n=2*n;
    
    vector<int>ans(n+1);

    vector<bool>check(n+1,0);

    for1(i,n){
        vector<int>b;
        for1(j,i){
            if(!check[j])b.pb(j);
        }

        int x=query(b);
        if(x!=0){
            ans[i]=x;
            check[i]=1;
        }
    }

    vector<int>used;

    for1(i,n)if(check[i])used.pb(i);

    for1(i,n){
        if(!check[i]){
            vector<int>temp=used;
            temp.pb(i);
            int x=query(temp);

            ans[i]=x;
        }
    }

    cout<<"! ";
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
