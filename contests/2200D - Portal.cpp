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


    int n,x,y; cin>>n>>x>>y;


    vector<int>a,b;



    forl(i,n){
        int d; cin>>d;
        if(i<x or i>=y)a.pb(d);
        else b.pb(d);

    }


    if(!b.empty()){

        rotate(b.begin(), min_element(b.begin(),b.end()),b.end());

    }

    int m=b.empty()?-1:b[0];

    auto it=a.begin();

    while(it!=a.end() and *it<m)it++;

    a.insert(it,b.begin(),b.end());

    forl(i,n)cout<<a[i]<<space;

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
