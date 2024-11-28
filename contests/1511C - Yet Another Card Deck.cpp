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
    int n,q; cin>>n>>q;

    vector<int>ind(50+1,0);

    vector<int>v(n);

    for1(i,n){
        int x; cin>>x;
        ind[x]=ind[x]>0?min(ind[x],i):i;
    }
    
    int l;

    for1(i,q){
        int x; cin>>x;

        l=ind[x];
        cout<<ind[x]<<space;
        ind[x]=0;

        for(int i=1; i<=50; i++){
            // if(ind[i]==1)continue;
            if(ind[i]<l)ind[i]++;
        }
    }


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
