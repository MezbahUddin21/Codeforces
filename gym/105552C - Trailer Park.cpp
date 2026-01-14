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


    vector<vector<ll>>v(n+1,vector<ll>(m+1,0));
    vector<vector<ll>>vc(n+1,vector<ll>(m+1,0));


    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            cin>>v[i][j];
            if(v[i][j]==-1)vc[i][j]=-1;
            else vc[i][j]=0;
        }
    }

    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            v[i][j]+=v[i-1][j];
            v[i][j]+=v[i][j-1];
            v[i][j]-=v[i-1][j-1];
        }
    }

    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            vc[i][j]+=vc[i-1][j];
            vc[i][j]+=vc[i][j-1];
            vc[i][j]-=vc[i-1][j-1];
        }
    }

    ll mn=1e18;
    ll mnn=mn;

    // for(ll i=0; i<=n; i++){
    //     for(ll j=0; j<=m; j++){
    //         cout<<vc[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    bool f=0;

    for(int i=a; i<=n; i++){
        for(int j=b; j<=m; j++){

            if(vc[i][j]+vc[i-a][j-b]-vc[i-a][j]-vc[i][j-b]>=0){
                mn=min(mn,v[i][j]+v[i-a][j-b]-v[i-a][j]-v[i][j-b]);
                f=1;
            }

        }
    }


    for(int i=b; i<=n; i++){
        for(int j=a; j<=m; j++){

            if(vc[i][j]+vc[i-b][j-a]-vc[i-b][j]-vc[i][j-a]>=0){
                mn=min(mn,v[i][j]+v[i-b][j-a]-v[i-b][j]-v[i][j-a]);
                f=1;
            }

        }
    }

    if(mn==mnn)cout<<-1<<endl;
    else cout<<mn<<endl;
    

    // for(ll i=1; i<=n; i++){
    //     for(ll j=1; j<=m; j++){
    //         if((i+a-1)<=n and (j+b-1)<=m){
    //             if(vc[i+a-1][j+b-1]-vc[i+a-1][j-1]-vc[i-1][j+b-1]+vc[i-1][j-1]>=0){
    //                 // cout<<vc[i+a-1][j+b-1]-vc[i+a-1][j-1]-vc[i-1][j+b-1]<<endl;
    //                 mn=min(mn,v[i+a-1][j+b-1] - v[i+a-1][j-1] - v[i-1][j+b-1] +v[i-1][j-1]);

    //             }
    //                 // cout<<vc[i+a-1][j+b-1]-vc[i+a-1][j-1]-vc[i-1][j+b-1]+vc[i-1][j-1]<<endl;
    //                 // cout<<vc[i+a-1][j+b-1]<<endl;

    //             // cout<<mn<<" "<<i<<" "<<j<<endl;
    //         }

    //         if((i+b-1)<=n and (j+a-1)<=m){

    //             if(vc[i+b-1][j+a-1] - vc[i+b-1][j-1] - vc[i-1][j+a-1] +vc[i-1][j-1]>=0){
    //                 // cout<<vc[i+b-1][j+a-1] - vc[i+b-1][j-1] - vc[i-1][j+a-1]<<endl;
    //                 mn=min(mn,v[i+b-1][j+a-1] - v[i+b-1][j-1] - v[i-1][j+a-1]+v[i-1][j-1]);

    //             }                
    //             // cout<<mn<<" "<<i<<" "<<j<<endl;


    //         }
    //     }
    // }

    // if(mn==mnn)cout<<-1<<endl;
    // else cout<<mn<<endl;

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
