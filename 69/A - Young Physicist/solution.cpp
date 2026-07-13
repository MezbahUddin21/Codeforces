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
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
}
 
void solve(){
	int n, x,y,z, sum1=0,sum2=0,sum3=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y>>z;
        sum1+=x;
        sum2+=y;
        sum3+=z;
    }
 
    if(sum1==0 && sum2==0 && sum3==0){cout<<"YES"<<endl;}
    else{
    cout<<"NO"<<endl;}
 
}
 
int main() {
    maruf();
 
        solve();
    return 0;
}