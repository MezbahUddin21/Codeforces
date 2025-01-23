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

int n,l,r; 

ll ans(vector<int> &vec) {
    sort(vec.begin(),vec.end());
    ll sum=0;
    for (int i=0;i<r-l+1;i++) sum+=vec[i];
    return sum;
}
void mine() {

    cin>>n>>l>>r;

    vector<int>v(n);

    forl(i,n) scanf("%d",&v[i]);

    vector<int> v1,v2;

    forl(i,r) v1.push_back(v[i]);
    for (int i=l-1;i<n;i++) v2.push_back(v[i]);

    cout<<min(ans(v1),ans(v2))<<endl;

}
 
 
 
 
signed main() {
    
    int t=1;
 
    cin>>t;  
 
   
    while(t--){
        mine();
    }
    return 0;
}
