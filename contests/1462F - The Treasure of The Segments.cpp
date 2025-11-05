#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
// #define mod 1000000007
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"YES"<<"\n";
#define pno cout<<"NO"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long int
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


void mine(){

    int n; cin>>n;

    vector<pair<int,int>>v(n);

    forl(i,n){
        int l,r; cin>>l>>r;
        v[i]=make_pair(l,r);

    }

    vector<int>l(n,0);
    vector<int>r(n,0);

    forl(i,n){
        l[i]=v[i].first;
        r[i]=v[i].second;
        // cout<<l[i]<<space<<r[i]<<endl;
    }


    sort all(l);
    sort all(r);

    int ans=INT_MAX;

    forl(i,n){

        int left=(upper_bound(r.begin(),r.end(),v[i].first-1))-r.begin();
        int right=((upper_bound(l.begin(),l.end(),v[i].second))-l.begin());

        // cout<<left<<space<<right<<endl;

        ans=min(ans,left+(n-right));


    }

    cout<<ans<<endl;


}

int main() {
    fast;
    ll t = 1; 
    cin>>t;
    // int c=1;
    while (t--){
        // cout<<"Case "<<c<<":"<<endl; c++;
        mine();
    }
    return 0;
}
