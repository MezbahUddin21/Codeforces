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
    int n,k; cin>>n>>k;

    vector<int>v(n);

    vector<int>cnt(5001);

    forl(i,n){
        cin>>v[i];
        cnt[v[i]]++;
    }

    forl(i,5001)if(cnt[i]>k){
        pno
        return;
    }

    pyes
    forl(i,n){
        cout<<max(cnt[v[i]]--,k--)<<space;
        
    }cout<<endl;

    

}


 
int main() {
    int t=1;
    // cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
