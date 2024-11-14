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

int cnt[26];

int gcd(ll a,ll b){
    return b? gcd(b,a%b): a; 
}


void mine(){
    ll n,m; cin>>n>>m;
    string a,b; cin>>a>>b;

    int la=a.size();
    int lb=n * la / m;

    ll ans=0;

    int g=gcd(la,lb);

    for(int i=0; i<g; i++){
		memset(cnt, 0, sizeof(cnt));

        for(int j=i; j<la; j+=g){
            cnt[a[j]-'a']++;
        }
        for(int j=i; j<lb; j+=g){
            ans+=cnt[b[j]-'a'];
        }

    }
    cout<<(m*lb-ans*(m/(la/g)))<<endl;
    
}




 
signed main() {
    int t=1;
    // cin>>t;

   
    while(t--){
        mine();
    }
    return 0;
}


