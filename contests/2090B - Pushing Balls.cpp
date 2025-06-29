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


void mine(){

    int n,m; cin>>n>>m;

    vector<string>v(n);

    forl(i,n){
        cin>>v[i];
    }
    forl(i,n){
        forl(j,m){
           if(v[i][j]=='1'){

            bool a=0,b=0;

                for(int k=i; k>=0; k--){
                    if(v[k][j]=='0')a=1;
                }
                for(int k=j; k>=0; k--){
                    if(v[i][k]=='0')b=1;
                }

                if(a and b){
                    pno
                    return;
                }

           }
        }
    }

    pyes

}

int main()
{
    int t=1; 
    cin>>t;
    
    // int c=1;
    
    while(t--){
        
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }

    return 0;
}
