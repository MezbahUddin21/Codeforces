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
    an array and a binary string 


*/

void mine(){

    int n; cin>>n;

    vector<int>v(n+1,0);

    for1(i,n)cin>>v[i];

    string s; cin>>s;
    s='#'+s;

    int x0=0,x1=0;
    
    for1(i,n){
        if(s[i]=='0')x0^=v[i];
        else x1^=v[i];

        v[i]^=v[i-1];
    }

    int q; cin>>q;

    while(q--){
        int g; cin>>g;

        if(g==1){
            int l,r; cin>>l>>r;

            x0^=v[r]^v[l-1];
            x1^=v[r]^v[l-1];

        }else{
            int f; cin>>f;

            if(f)cout<<x1<<space;
            else cout<<x0<<space;
        }

    }

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
