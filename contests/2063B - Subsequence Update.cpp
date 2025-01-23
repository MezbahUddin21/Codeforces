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
 

const int maxn=(1e5)+10;
int T,n,l,r,a[maxn];
ll calc(vector<int> &vec) {
    sort(vec.begin(),vec.end());
    ll ans=0;
    for (int i=0;i<r-l+1;i++) ans+=vec[i];
    return ans;
}
void mine() {

    scanf("%d %d %d",&n,&l,&r);
    for (int i=1;i<=n;i++) scanf("%d",&a[i]);
    vector<int> v1,v2;
    for (int i=1;i<=r;i++) v1.push_back(a[i]);
    for (int i=l;i<=n;i++) v2.push_back(a[i]);
    printf("%lld\n",min(calc(v1),calc(v2)));

}
 
 
 
 
signed main() {
    
    int t=1;
 
    cin>>t;  
 
   
    while(t--){
        mine();
    }
    return 0;
}
