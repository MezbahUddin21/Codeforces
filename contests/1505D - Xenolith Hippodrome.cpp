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
    bool f=0;

    int bit[32];

    forl(i,32)bit[i]=0;

    while(n){
        if(bit[n%m]){
            f=1;
            break;
        }
        else {
            bit[n%m]=1;
            n/=m;
        }
    }

    if(f)pno
    else pyes
}

int main() {
    // fast;
    int t = 1;
    while (t--) {
        mine();
    }
    return 0;
}
