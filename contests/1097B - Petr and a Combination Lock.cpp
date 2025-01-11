#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) (v.begin()a, v.end())
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

    forl(i,n)cin>>v[i];

    for(int i=0; i<(1<<n); i++){
        int x=i, sum=0;

        for(int j=0; j<n; j++){
            int d=x%2;
            if(d)sum+=v[j];
            else sum-=v[j];

            x/=2;
        }

        if(sum%360==0){
            pyes
            return;
        }
    }
    pno

}
 
 
 
 
signed main() {
    int t=1;
 
    // cin>>t;
 
   
    while(t--){
        mine();
    }
    return 0;
}
