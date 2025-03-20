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

int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};


int v[1010][1010];
bool mark[1010*1010];


void mine(){
    
    int r,c,n,p; cin>>r>>c>>n>>p;


    for1(i,r){
        for1(j,c){
            cin>>v[i][j];
        }
    }
    for1(i,r){
        for1(j,c){
            if(v[i][j]<=p and v[i][j]){
                int diff=p-v[i][j];

                for(int l=0; l<4; l++){
                    int a=i+X[l];
                    int b=j+Y[l];

                    if(v[a][b]){
                        mark[v[a][b]+diff]=1;
                    }

                }

            }
        }
    }



    int ans=0;

    for(int i=1; i<=n; i++)ans+=mark[i];


    cout<<ans<<"/"<<n-1<<endl;






}

int main()
{
    int t=1; 
    // cin>>t;
    
    while(t--){
        mine();
    }

    return 0;
}
