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
    
    ll n; cin>>n;

    ll px,py,qx,qy; cin>>px>>py>>qx>>qy;

    vector<ll>v(n);

    ll sum=0;
    

    forl(i,n){
        cin>>v[i];
        sum+=v[i];
    }
    sort all(v);

    ll mx=*max_element all(v);

    // cout<<mx<<endl;

    ll dx = abs(qx - px);
    ll dy = abs(qy - py);

    ll dis =dx*dx + dy*dy;

    ll mn=max(mx*2-sum,0LL);

    if(mn*mn<=dis and sum*sum>=dis)pyes
    else pno

}
 
int main() {
    fast;
    int t = 1; 
    cin>>t;
    // int c=1;
    while (t--) {

        // cout<<"Case "<<c<<":"<<endl; c++;
        mine();
    }
    return 0;
}
