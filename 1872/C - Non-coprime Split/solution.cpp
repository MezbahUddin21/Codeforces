#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
void solve(){
    ll c,d;   cin>>c>>d;
        for(ll i=c; i<=d; i++){
            if(i>2 && i%2==0){
                cout<<i/2<<" "<<i/2<<endl;
                return;
            }
        }
        if(c>1 && c==d){
            for(int j=2; j<=sqrt(c); j++){
                if(c%j==0){
                    cout<<j<<" "<<c-j<<endl;
                    return;
                }
            }
        }
        
        cout<<"-1"<<endl;
        
}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
 
 