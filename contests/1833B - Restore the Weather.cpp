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
#define fast {ios_base::sync_with_stdio(false); cin.tie(0);}



void mine(){
    int n,k; cin>>n>>k;

    vector<pair<int,int>>a(n);
    vector<int>b(n);

    forl(i,n){
        cin>>a[i].first;
        a[i].second=i;
    }

    forl(i,n)cin>>b[i];

    sort all(a);

    sort all(b);

    vector<pair<int,int>>ans(n);

    for(int i=0; i<n; i++){
        ans[i].first=a[i].second;
        ans[i].second=b[i];
    }

    sort all(ans);

    forl(i,n)cout<<ans[i].second<<space;
    cout<<endl;



}



 
int main() {
    fast
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}


