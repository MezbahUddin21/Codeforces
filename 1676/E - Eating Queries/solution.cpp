#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "
"
#define sp " "
#define setprecision(x) cout << fixed << setprecision(x)
 
#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void maruf(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>vn(n);
    for(auto &e:vn)cin>>e;
    vector<int>vm(m);
    for(auto &e:vm)cin>>e;
    
    
    sort(vn.begin(), vn.end(), greater<int>()); 
    for(int i=1; i<n; i++){
        vn[i]+=vn[i-1];
    }
    
 
    for(int i=0; i<m; i++){
        ll l=0, r=n-1;
        bool f=false;
        int res = 0;
        while (l<=r){
            int mid = (l+ r) / 2;
            if (vn[mid]>=vm[i]){
                res = mid + 1;
                r = mid - 1;
                f=true;
            }else{
                l = mid + 1;
            }
        }
        if (f){
            cout << res << endl;
        }else{
            cout << -1 << endl;
        }
    }
 
}
 
int main() {
    maruf();
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}
// 9 5 4 4 3 3 1 1
// 9 14 18 22 25 28 29 30