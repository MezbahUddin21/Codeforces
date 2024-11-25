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



void mine(){
    int n,k; cin>>n>>k;

    vector<int>v(n);

    forl(i,n)cin>>v[i];

    int bo[31];
    mem(bo,0);

    for(int i=0; i<n; i++){
        for(int l=0; l<=30; l++){
            if((v[i]>>l)&1)bo[30-l]++;
        }
    }

    bool ans[31];
    mem(ans,0);

    for(int i=0; i<=30; i++){
        if(n-bo[i]<=k){
            ans[i]=1;
            k-=(n-bo[i]);
        }
    }

    int res=0;

    for(int i=0; i<=30; i++){
        if(res>=1)res=res<<1;
        if(ans[i])res=res|1;
    }
    
    cout<<res<<endl;


}


 
int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
