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
    int n; cin>>n;
    vector<int>v(n);

    map<int,int>mp;

    forl(i,n){
        cin>>v[i];
        mp[v[i]]++;
    }

    ll sum= accumulate(v.begin(),v.end(),0LL);

    vector<int>ans;

    for(int i=0; i<n; i++){
        sum-=v[i];
        mp[v[i]]--;
        if(sum%2==0 and sum/2<=1e6 and mp[sum/2]>0){
            ans.pb(i+1);
        }
        sum+=v[i];
        mp[v[i]]++;
    }

    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<space;
    }cout<<endl;

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
