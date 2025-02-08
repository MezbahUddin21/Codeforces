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
        }


        int sz(){
            int z=0;

            for1(i,n)if(i==master[i])z++;

            return z;
        }
        
    
    
    
};


void mine(){
    int n; cin>>n;
    
    Dsu dsu(n);
    
    int m; cin>>m;

    vector<vector<int>>g(n+1, vector<int>(15,0));

    while(m--){
        int a,d,k; cin>>a>>d>>k;

        g[a][d]=max(g[a][d],k);

    }

    for1(i,n){
        for1(j,10){
            int it=g[i][j];

            for(int pos=i; pos+j<=n and it>0; ){
                it--;
                dsu.unionn(pos,pos+j);
                g[pos][j]=0;

                pos+=j;

                it=max(g[pos][j],it);
            }
        }
    }

    cout<<dsu.sz()<<endl;
    
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
