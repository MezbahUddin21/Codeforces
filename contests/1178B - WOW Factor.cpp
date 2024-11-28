#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"Yes"<<"\n";
#define pno cout<<"No"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


void mine(){
    string s; cin>>s;
    ll n=s.size();

    vector<ll>pre(n);

    ll cnt=0;
    for(ll i=1; i<n; i++){
        if(s[i]=='v' and s[i-1]=='v')cnt++;

        pre[i]=cnt;
    }

    ll ans=0;

    for(ll i=1; i<n; i++){
        // if(s[i]=='o' and s[i-1]=='o')continue;
        if(s[i]=='o'){
            if(pre[i]>=1 and cnt-pre[i]>=1){
                ans+=pre[i]*(cnt-pre[i]);
            }
        }
    }

    cout<<ans<<endl;

}


 
int main() {
    fast;
    int t=1;
    // cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
