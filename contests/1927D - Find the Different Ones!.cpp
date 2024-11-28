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
    int n; cin>>n;
    vector<int>v(n);

    forl(i,n)cin>>v[i];

    // vector<int>cnt(n);
    // cnt[0]=1;


    vector<pair<int,int>>p(n);
    p[0].first=1;
    p[0].second=1;

    for(int i=1; i<n; i++){
        if(v[i]!=v[i-1]){
            p[i].first=i;
            p[i].second=i+1;
        }else{
            p[i].first=p[i-1].first;
            p[i].second=p[i-1].second;
        }


    }

    // forl(i,n)cout<<p[i].first<<space<<p[i].second<<endl;
    // cout<<endl;

    // cout<<p[4].first<<space<<p[4].second<<endl;

    int q; cin>>q;

    while(q--){
        int l,r; cin>>l>>r;
        if(p[r-1].first>=l and p[r-1].second!=p[r-1].first){
            cout<<p[r-1].first<<space<<p[r-1].second<<endl;
        }else cout<<-1<<space<<-1<<endl;

    }

    cout<<endl;

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
