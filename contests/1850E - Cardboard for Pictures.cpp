#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,c;
    cin>>n>>c;
    vector<int>v(n);
    for(auto &e:v)cin>>e;
    int l=1, r=1e9;
    while(l<=r){
        int mid=l+(r-l)/2;
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=(v[i]+2*mid)*(v[i]+2*mid);
            if(sum>c)break;
        }
        if(sum==c){
            cout<<mid<<endl;
            return;
        }
        if(sum>c)r=mid-1;
        else l=mid+1;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
