#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){

    string s; cin>>s;

    ll n=s.size();
    ll res = n;

    ll cur=0;

    for(ll i=0; i<n; i++){

        if(s[i]=='-')cur--;
        else cur++;

        if(cur<0){
            res+=i+1;
            cur=0;
        }

    }

    cout<<res<<endl;

}

int main(){

    int t=1;

    cin>>t;

    while(t--){
        solve();
    }


    return 0;
}
