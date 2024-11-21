#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll l=1, r=10000;
        ll sum=0;
        string ans="no";
        while(l<=r){
            sum=(l*l*l)+(r*r*r);
            if(sum==n){
                ans="yes";
                break;
            }else{
                if(sum>n){
                    r--;
                }
                else {l++;}
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
