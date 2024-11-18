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


void printt(vector<int> v){
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}


void mine(){
    int n,m,l; cin>>n>>m>>l;

    vector<tuple<int,int,vector<int>>>a(n);

    for(auto &[x,y,z] : a)cin>>x>>y,y=y-x+2;

    while(m--){
        int x,v; cin>>x>>v;
        auto it=upper_bound(a.begin(),a.end(),tuple(x,0,vector<int>{}));

        if(it==a.end())continue;

        get<2>(*it).pb(v);

    }

    int ans=0, jump=1;

    multiset<int>s;

    for(auto &[x,y,v] : a){
        for(int p:v)s.insert(p);

        while(jump<y){
            if(s.empty()){
                cout<<-1<<endl;
                return;
            }

            jump+=*s.rbegin();
            s.erase(prev(s.end()));
            ans++;
        }
    }

    cout<<ans<<endl;

}
 



 
signed main() {
    ios::sync_with_stdio(0),cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;

//    int c=1;
    while(t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}


