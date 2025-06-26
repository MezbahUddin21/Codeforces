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
   int n,x; cin>>n>>x;

    vector<int>v(n);

    forl(i,n)cin>>v[i];

    int l=-1,r=-1;

    forl(i,n){
        if(v[i]==1){
            l=i;
            break;
        }
    }

    for(int i=n-1; i>=0; i--){
        if(v[i]==1){
            r=i;
            break;
        }
    }

    if(l==-1){
        pyes
        return;
    }

    if(x>=(r-l+1))pyes
    else pno

}
 
int main() {
    fast;
    int t = 1; cin>>t;
    // int c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
