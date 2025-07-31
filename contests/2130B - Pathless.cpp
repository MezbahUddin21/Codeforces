#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000003
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
    
    int n,s; cin>>n>>s;

    vector<int>v(n);

    forl(i,n)cin>>v[i];

    ll sum=0;

    forl(i,n){
        sum+=v[i];
    }

    if(sum>s or s-sum==1){
        vector<int>cnt(3,0);

        forl(i,n)cnt[v[i]]++;

        forl(i,cnt[0])cout<<0<<space;
        forl(i,cnt[2])cout<<2<<space;
        forl(i,cnt[1])cout<<1<<space;
        
        cout<<endl;
        
    }else{
        cout<<-1<<endl;
    }

    
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


