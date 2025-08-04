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

    int n,m,k; cin>>n>>m>>k;

    vector<string>v(n);

    forl(i,n)cin>>v[i];


    vector<vector<int>>prefix(n,vector<int>(m,0));


    forl(i,n){
        forl(j,m){
            if(v[i][j]=='g')prefix[i][j]+=1;

            if(i>0)prefix[i][j]+=prefix[i-1][j];
            if(j>0)prefix[i][j]+=prefix[i][j-1];
            if(i>0 and j>0)prefix[i][j]-=prefix[i-1][j-1];
        }
    }

    ll total=prefix[n-1][m-1];

    // cout<<endl;

    // forl(i,n){
    //     forl(j,m){
    //         cout<<prefix[i][j]<<space;
    //     }cout<<endl;
    // }

    // cout<<endl;


    int mn=INT_MAX;
    forl(i,n){
        forl(j,m){
            if(v[i][j]=='.'){

                int a,b,c,d;

                if(i-k<0 or j-k<0)a=0;
                else a=prefix[i-k][j-k];

                if(i-k<0)b=0;
                else b=prefix[i-k][min(j+k-1,m-1)];

                if(j-k<0)c=0;
                else c=prefix[min(i+k-1,n-1)][j-k];

                d=prefix[min(i+k-1,n-1)][min(j+k-1,m-1)];

                // cout<<a<<space<<b<<space<<c<<space<<d<<endl;

                mn=min(mn,d+a-b-c);


            }
        }
    }

    // cout<<total<<endl;

    cout<<total-mn<<endl;



    
}





signed main() {
    ios::sync_with_stdio(0),cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;

// int c=1;
    while(t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}


