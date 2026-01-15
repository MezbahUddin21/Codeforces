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

   ll n; cin>>n;
   ll k; cin>>k;

   vector<ll>v(n+1,0);
   vector<ll>pre(n+1,0);


   for(ll i=1; i<=n; i++ )cin>>v[i];
   for(ll i=1; i<=n; i++ ){
    pre[i]=pre[i-1]+v[i];
   }

   map<ll,ll>cnt;

   ll c=0;

   ll start=1;

   ll ans=0;

//    cout<<pre[n]<<endl;

   for(ll i=1; i<=n; i++){
        if(cnt[v[i]]==0)c++;

        cnt[v[i]]++;

        if(c<=k){
            ans=max(ans,pre[i]-pre[start-1]);

        }else if(c>k){

            for(ll j=start; j<=i; j++){
                cnt[v[j]]--;
                start++;
                if(cnt[v[j]]<=0){
                    c--;
                    break;
                }
            }
            if(c<=k){
                ans=max(ans,pre[i]-pre[start-1]);
            }

        }

   }

   cout<<ans<<endl;
   
    
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
