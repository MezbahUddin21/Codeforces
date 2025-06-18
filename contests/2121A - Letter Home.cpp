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
 
 
 
 
void mine(){
    int n,m; cin>>n>>m;

    vector<int>v(n+1);

    int mn= INT_MAX, mx=0;

    for1(i,n){
        int x; cin>>x;
        mn=min(mn,x);
        mx=max(mx,x);
    }
    if(mx==mn){
        cout<<abs(m-mn)<<endl;
        return;
    }else if(mx<=m){
        cout<<m-mn<<endl;
        return;
    }else if(mn>=m){
        cout<<mx-m<<endl;
        return;
    }

    int ans=2*min(abs(mx-m),abs(mn-m))+ max(abs(mx-m),abs(mn-m));


    cout<<ans<<endl;



 
}
 
int main() {
    fast;
    int t = 1; cin>>t;
    int c=1;
    while (t--) {

        // cout<<"Case "<<c<<":"<<endl; c++;
        mine();
    }
    return 0;
}
