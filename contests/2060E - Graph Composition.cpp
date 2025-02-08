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


class Dsu{
    vector<int>master;
    vector<int>sz;
    
    int n;
    
    public:
        Dsu(int m){

            n=m;
            master.assign(n+1,0);
            sz.assign(n+1,0);
            
            for(int i=0; i<=n; i++){
                master[i]=i;
            }

        }
        
        int fnd(int a){
            if(a==master[a])return a;
            
            return master[a]=fnd(master[a]);
        
        }
        
    void unionn(int a,int b){
        a=fnd(a),b=fnd(b);

        if(a==b)return;

        master[b]=a;

        sz[a]+=sz[b];
    }
        
    
};

void mine(){
    int n; cin>>n;

    int res=0;

    int m1, m2; cin>>m1>>m2;

    Dsu dsu1(n), dsu2(n);

    vector<pair<int,int>>eg1;
    vector<pair<int,int>>eg2;

    forl(i,m1){
        int a,b; cin>>a>>b;
        eg1.pb({a,b});

    }

    forl(i,m2){
        int a,b; cin>>a>>b;
        eg2.pb({a,b});

        dsu2.unionn(a,b);
    }

    for(auto it: eg1){
        if(dsu2.fnd(it.first)==dsu2.fnd(it.second))
            dsu1.unionn(it.first,it.second);
        else res++;
    }

    // cout<<res<<"fff"<<endl;

    map<int,int>ma,mb;

    for1(i,n){
        ma[dsu1.fnd(i)]++;
        mb[dsu2.fnd(i)]++;
    }

    cout<<res+(ma.size()-mb.size())<<endl;


};

int main()
{
    int t=1; 
    cin>>t;
    
    while(t--){
        mine();
    }

    return 0;
}
