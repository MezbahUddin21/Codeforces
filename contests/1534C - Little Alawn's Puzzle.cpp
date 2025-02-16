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

    ll n; cin>>n;


    vector<vector<ll>>v(2, vector<ll>(n));

    for(ll i=0; i<2; i++){
        forl(j,n){
            cin>>v[i][j];
            --v[i][j];
        }
    }


    Dsu dsu(n);

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
      p[v[0][i]] = v[1][i];
    }
    for (int i = 0; i < n; i++) {
      dsu.unionn(i, p[i]);
    }

    ll ans=1;
        
    forl(i,n){
        if(dsu.fnd(i)==i){
            ans=ans*(ll)2%mod;
        }
    }

    
    cout<<ans<<endl;

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
