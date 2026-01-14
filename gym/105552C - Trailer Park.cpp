#include <bits/stdc++.h>
using namespace std;
#define ll long long


void file(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);

    #endif
}


void solve(){
    ll n,m,a,b; cin>>n>>m>>a>>b;

    vector<vector<ll>>v(n+1,vector<ll>(m+1));
    vector<vector<ll>>vc(n+1,vector<ll>(m+1,0));


    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            cin>>v[i][j];
            if(v[i][j]==-1)vc[i][j]=-1;
        }
    }

    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            if(i-1>0)v[i][j]+=v[i-1][j];
            if(j-1>0)v[i][j]+=v[i][j-1];
            if(i-1>0 and j-1>0)v[i][j]-=v[i-1][j-1];
        }
    }

    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            if(i-1>0)vc[i][j]+=vc[i-1][j];
            if(j-1>0)vc[i][j]+=vc[i][j-1];
            if(i-1>0 and j-1>0)vc[i][j]-=vc[i-1][j-1];
        }
    }

    ll mn=1e18;

    // for(ll i=1; i<=n; i++){
    //     for(ll j=1; j<=m; j++){
    //         cout<<vc[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            if(i+a-1<=n and j+b-1<=m){
                if(vc[i+a-1][j+b-1]-vc[i+a-1][j-1]-vc[i-1][j+b-1]+vc[i-1][j-1]==0){
                    // cout<<vc[i+a-1][j+b-1]-vc[i+a-1][j-1]-vc[i-1][j+b-1]<<endl;
                    mn=min(mn,v[i+a-1][j+b-1] - v[i+a-1][j-1] - v[i-1][j+b-1] +v[i-1][j-1]);

                }
                // cout<<mn<<endl;
            }

            if(i+b-1<=n and j+a-1<=m){

                if(vc[i+b-1][j+a-1] - vc[i+b-1][j-1] - vc[i-1][j+a-1] +vc[i-1][j-1]==0){
                    // cout<<vc[i+b-1][j+a-1] - vc[i+b-1][j-1] - vc[i-1][j+a-1]<<endl;
                    mn=min(mn,v[i+b-1][j+a-1] - v[i+b-1][j-1] - v[i-1][j+a-1]+v[i-1][j-1]);

                }                // cout<<mn<<endl;

            }
        }
    }

    if(mn==1e18)cout<<-1<<endl;
    else cout<<mn<<endl;

}

int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    file();
    int t=1;
    // cin>>t;

    while(t--){
        solve();
    }
}
