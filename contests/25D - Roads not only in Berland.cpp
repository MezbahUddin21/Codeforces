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
    
    int n;
    
    public:
        Dsu(int m){

            n=m;
            master.assign(n+1,0);
            
            for(int i=0; i<=n; i++){
                master[i]=i;
            }
        }
        
        int fnd(int a){
            if(a==master[a])return a;
            
            return master[a]=fnd(master[a]);
        
        }
        
        void unionn(int a, int b){
            a=fnd(a);
            b=fnd(b);
            
            master[b]=a;
        };
        
    
    
    
};


void mine(){
    int n; cin>>n;
    
    Dsu dsu(n);
 

    int m=n-1;

    vector<pair<int,int>>l1,l2;

    while(m--){
        int u,v; cin>>u>>v;
        if(dsu.fnd(u)==dsu.fnd(v)){
            l1.pb({u,v});
        }else dsu.unionn(u,v);
    }

    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            if(dsu.fnd(i)!=dsu.fnd(j)){
                l2.pb({i,j});
                dsu.unionn(i,j);
            }
        }
    }
    
    cout<<l2.size()<<endl;
    for(int i=0; i<l2.size(); i++){
        cout<<l1[i].first<<space<<l1[i].second<<space;
        cout<<l2[i].first<<space<<l2[i].second<<endl;
    }
};

int main()
{
    int t=1; 
    // cin>>t;
    
    while(t--){
        mine();
    }

    return 0;
}
