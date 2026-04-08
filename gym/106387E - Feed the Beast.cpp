#include<bits/stdc++.h>
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

    ll n,b,x; cin>>n>>b>>x;

    vector<ll>v(n);

    for(ll i=0; i<n; i++){
        cin>>v[i];
    }

    ll l=0,r=x*b+100;

    ll ans=0;

    while(l<=r){
        ll mid=(l+r)/2;
        // cout<<mid<<endl;

        ll cb=b;

        bool check=1;

        for(ll i=0; i<n; i++){
            
            ll need=mid*v[i];


            if(need%x==0){
                cb-=need/x;
            }else{
                cb-=((need/x)+1);

            }

            if(cb<0){
                check=0;
                break;
            }

        }


        if(check){

            ans=max(ans,mid);
        }

        if(!check){

            r=mid-1;
        }else{

            l=mid+1;
        }


    }

    cout<<ans<<endl;


}
int main(){

  ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    file();

    solve();

    return 0;
}
