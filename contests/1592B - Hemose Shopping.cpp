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
    int n,x; cin>>n>>x;

    vector<int>v(n);
    vector<int>final;

    forl(i,n){
        cin>>v[i];
    }

    if(is_sorted all(v)){
        pyes
        return;
    }

    if(x<=n/2){
        pyes
        return;

    }else {
        vector<int>vv;
        int l=n-x;
        for(int i=0; i<l; i++)vv.pb(v[i]);
        for(int i=n-1; i>=n-l; i--)vv.pb(v[i]);

        sort all(vv);

        for(int i=0; i<vv.size()/2; i++){
            final.pb(vv[i]);
        }

        for(int i=l; i<n-l; i++){
            final.pb(v[i]);
        }

        for(int i=vv.size()/2; i<vv.size(); i++){
            final.pb(vv[i]);
        }

        if(is_sorted all(final))pyes
        else pno
    }

    
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


 
