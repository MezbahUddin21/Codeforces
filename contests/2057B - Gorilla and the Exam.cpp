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
     
     int n,k; cin>>n>>k;

     vector<int>v(n);

     forl(i,n)cin>>v[i];

     map<int,int>mp;

     forl(i,n)mp[v[i]]++;

     vector<pair<int,int>>vv;

     for(auto it:mp){
        vv.pb({it.second,it.first});
     }

     sort all(vv);

     int ans=vv.size();

     forl(i,vv.size()){
        if(k>=vv[i].first){
            k-=vv[i].first;
            ans--;
        }
     }

     cout<<max(ans,1)<<endl;



    

}


 
int main() {
    fast;
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
