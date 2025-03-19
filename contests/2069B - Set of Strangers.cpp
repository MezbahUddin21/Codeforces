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

// int X[4]={0,0,1,-1};
// int Y[4]={1,-1,0,0};

void mine(){
    int n,m; cin>>n>>m;

    vector<vector<int>>v(n+3,vector<int>(m+3));

    map<int,int>mp;

    for1(i,n){
        for1(j,m){
            cin>>v[i][j];
            mp[v[i][j]]=1;
        }
    }


    for1(i,n){
        for1(j,m){
            int a = v[i][j];
            if(a==v[i][j-1] || a==v[i-1][j] || a==v[i+1][j] || a==v[i][j+1])
                mp[a]=2;
        }
    }

    int ans=0,mx=0;

    for(auto it:mp){
        ans+=it.second;
        mx=max(mx,it.second);
    }

    cout<<ans-mx<<endl;
    

}


 
int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
