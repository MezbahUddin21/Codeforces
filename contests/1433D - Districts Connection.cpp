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
    int n; cin>>n;

    vector<pair<int,int>>vv(n);

    forl(i,n){
        int x; cin>>x;

        vv[i].first=x;

        vv[i].second=i;
    }


    vector<pair<int,int>>ans;

    int id=-1;

    for(int i=1; i<n; i++){
        if(vv[0].first!=vv[i].first){
            id=i;
            ans.pb({1,i+1});
        }
    }

    if(id==-1){
        pno
        return;
    }

    for(int i=1; i<n; i++){
        if(vv[0].first==vv[i].first){
            ans.pb({id+1,i+1});
        }
    }

    pyes
    for(auto it:ans){
        cout<<it.first<<space<<it.second<<endl;
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


