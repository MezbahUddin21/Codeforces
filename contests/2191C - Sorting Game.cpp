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

    int n; cin>>n;

    string s; cin>>s;

    string ss=s;

    sort all(ss);

    if(ss==s){
        cout<<"Bob"<<endl;
        return;
    }

   int cntz=count(s.begin(),s.end(),'0');
    int i=0;
    int cnto=0;
    vector<int>ans;
   while(i<n){
    if(s[i]=='1' and i<cntz)ans.pb(i);
    else if(s[i]=='0' and i>=cntz)ans.pb(i);
    i++;
   }

   cout<<"Alice"<<endl;

   cout<<ans.size()<<endl;

   for(auto it:ans)cout<<it+1<<space;

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
