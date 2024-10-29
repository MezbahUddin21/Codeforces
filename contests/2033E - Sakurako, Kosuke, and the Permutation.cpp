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




void mine(){
    
    int n; cin>>n;
    vector<int>v(n);
    forl(i,n){
        cin>>v[i];
        v[i]--;
    }
    int ans=0;
    vector<int>vis(n,0);
    for(int i=0; i<n; i++){
        if(vis[i])continue;
        
        int len=0;
        for(int j=i; !vis[j]; j=v[j]){
            vis[j]=1;
            len++;
        }
        ans+=(len-1)/2;
    }

    cout<<ans<<endl;
}



 
signed main() {
    int t;
    cin>>t;

   
    while(t--){
        mine();
    }
    return 0;
}


