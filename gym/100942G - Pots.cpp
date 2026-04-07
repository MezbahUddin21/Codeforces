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


    ll n; cin>>n;

    vector<ll>v(n);

    vector<ll>cnt(1000000,0);

    for(ll i=0; i<n; i++){
        cin>>v[i];
        cnt[v[i]]++;
    }


    ll ans=*max_element(cnt.begin(),cnt.end());

    cout<<ans<<endl;



}

int main(){


    file();

    solve();

    return 0;
}
