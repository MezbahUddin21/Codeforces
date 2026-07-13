#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "
"
#define sp " "
// #define setprecision(x) cout << fixed << setprecision(x)
 
#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void maruf(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
 
void solve(){
    string s;   cin>>s;
    int cnt=1;
    for(int i=1; i<s.size(); i++){
        if(s[i]==s[i-1]){
            cnt++;
            if(cnt>=7){
                cout<<"YES"<<endl;
                return;
            }
        }else{
            cnt=1;
        }
    }
    cout<<"NO"<<endl;
}
 
int main() {
    maruf();
    // int t;
    // cin>>t;
    
    // while(t--){
        solve();
    // }
    return 0;
}