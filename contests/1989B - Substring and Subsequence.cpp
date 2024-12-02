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

    string s1,s2; cin>>s1>>s2;
    int n=s1.size(),m=s2.size();


    int ans=n+m;

    for (int i = 0; i < m; ++i) {
      int j = i;
      for (auto c : s1) {
        if (j < m && c == s2[j]) ++j;
      }
      ans = min(ans, n + m - (j - i));
    }

    // cout<<cnt<<endl;

    // int ans=n+m-cnt;

    // if()

    cout<<ans<<endl;


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


 
