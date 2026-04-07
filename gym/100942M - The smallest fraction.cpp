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

ll lc(ll x, ll y){

    ll l=(x*y)/__gcd(x,y);
    return l;
}

void solve(){


    ll n; cin>>n;

    ll l=1;

    ll g=0;

    while(n--){
        ll x,y; cin>>x>>y;

        l=lc(l,x);

        g=__gcd(g,y);

    }

    cout<<l<<" "<<g<<endl;


}

int main(){


    file();

    solve();

    return 0;
}
