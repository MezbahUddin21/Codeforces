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

    vector<int>v(n+1,0);

    for1(i,n)cin>>v[i];

    int dp[5]={0,0,0,0,0};

    dp[0]=1;

    for1(i,n){
        if(v[i]==2){
            dp[2]=dp[2]+dp[2];
            dp[2]%=998244353;
        }

        dp[v[i]]=dp[v[i]]+dp[v[i]-1];
        dp[v[i]]%=998244353;
    }

    cout<<dp[3]<<endl;

}


 
int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
