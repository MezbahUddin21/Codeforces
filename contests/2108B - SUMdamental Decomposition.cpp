#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"YES ";
#define pno cout<<"NO "<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void mine() {
    ll n, a; cin>>n>>a;

    if(n==1 and a==0){
        cout<<-1<<endl;
        return;
    }

    int cnt = __builtin_popcount(a);

    if(n<=cnt){
        cout<<a<<endl;
        return;
    }

    n-=cnt;

    int ans=a;

    if(n%2==0){
        cout<<ans+n<<endl;
        return;
    }

    if(n&1){
        ans+=n-1;
        if(cnt==0 or (cnt==1 and a==1))ans+=4;
        else ans+=2;
        
    }

    cout<<ans<<endl;
    
    
}

int main() {
    fast;
    int t = 1;
    cin>>t;
    while (t--) {
        mine();
    }
    return 0;
}
