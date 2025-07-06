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
    
    ll n,l,r,k; cin>>n>>l>>r>>k;

    if(n&1){
        cout<<l<<endl;
        return;
    }
    if(n==2){
        cout<<-1<<endl;
        return;
    }


    ll ans=1;

    while(ans<=l){
        ans<<=1;
    }
    if(ans>r)cout<<-1<<endl;
    else if(k<=n-2)cout<<l<<endl;
    else cout<<ans<<endl;







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
