#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1e9+7
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"yes"<<"\n";
#define pno cout<<"no"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

/*
    string v is substring w
    finding substring with 

*/

void mine(){

    
    ll k; cin>>k;

    string s; cin>>s;

    ll n=s.size();



    s="$"+s;

    ll st=1,en=0;

    vector<ll>pre(n+1);

    for(ll i=1; i<=n; i++){
        if(s[i]=='1')pre[i]=pre[i-1]+1;
        else pre[i]=pre[i-1];
    }
ll ans=0;
if(k==0){
ll ans=0;
ll cnt=0;

    for(ll i=1; i<=n; i++){
        int f=0;

if(s[i]=='0')cnt++;
if(s[i]=='1' or i==n){
ans+=cnt*(cnt+1)/2;
cnt=0;
}
    }
cout<<ans<<endl; return;
}

    for(ll i=1; i<=n; i++){

        if(pre[i]>=k and s[i]=='1'){
            ll l=1,r=1;

            for(ll j=st; j<=i; j++){
                if(s[j]=='0')l++;
                else {
                    st=j+1;
                    // cout<<"st"<<st<<space<<l<<endl;
                    break;
                }
            }

            for(ll j=i+1; j<=n; j++){
                if(s[j]=='0')r++;
                else break;
            }

            ans+=l*r;

        }


    }

    cout<<ans<<endl;
}

int main() {
    fast;
    ll t = 1;
    // cin>>t;
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
