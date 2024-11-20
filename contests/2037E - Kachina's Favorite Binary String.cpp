#include <bits/stdc++.h>
using namespace std;

#define ll long long




 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll x, t;
    cin>>t;

    while(t--){
        ll n; cin>>n;
        vector<ll>v(n),ans(n);

        for(ll i=2; i<=n; i++){
            cout<<"? 1 "<<i<<endl;
            cin>>x;
            v[i-1]=x;
        }


        if(v[n-1]==0)cout<<"! IMPOSSIBLE"<<endl;
        else{
            for(ll i=1; i<n; i++){
                if(v[i]!=v[i-1])ans[i]=1;
            }

            for(ll i=1; i<n; i++){
                if(v[i]){
                    for(ll j=0; j<i-v[i]; j++)ans[j]=1;
                    break;
                }
            }
            cout<<"! ";
            for(int i=0; i<n; i++)cout<<ans[i];
            cout<<endl;
        }
    }
}

