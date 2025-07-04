#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 998244353
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

    vector<vector<int>>v(n,vector<int>(m));

    vector<int>mp(110,0);

    int mx=0;

    forl(i,n){
        forl(j,m){
            cin>>v[i][j];

            mp[v[i][j]]++;

            mx=max(mx,v[i][j]);

        }
    }

    vector<int>row(n,0);
    vector<int>col(m,0);

    forl(i,n){
        forl(j,m){
            if(v[i][j]==mx){
                row[i]++;
                col[j]++;
            }
        }
    }

    int ans=0;

    forl(i,n){
        forl(j,m){
            int inans=row[i]+col[j];
            if(v[i][j]==mx){
                inans--;
            }

            ans=max(ans,inans);
        }
    }

    // cout<<mp[mx]<<endl;
    // cout<<endl;

    if(ans<mp[mx])cout<<mx<<endl;
    else cout<<mx-1<<endl;








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
