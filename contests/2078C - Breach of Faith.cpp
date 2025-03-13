#include <bits/stdc++.h>
using namespace std;


// Debug..
// #ifndef LOCAL
// #include "debug.h"
// #else
// #define dg(x...)
// #endif

#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) v.begin(), v.end()
#define allr(v) v.begin(), v.end(),greater<>()
#define pyes cout<<"YES"<<"\n";
#define pno cout<<"NO"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)

  

void mine(){

    int n; cin >> n; 

    vector<int> a(2 * n); 

    forl(i,n*2)cin>>a[i];
 
    sort(all(a));

    ll a1 = 0; 
    for (int i = 0; i < 2 * n; ++i) {
        if (i < n - 1) {
            a1 -= a[i]; 
        } else {
            a1 += a[i]; 
        }
    }

    // cout<<a1<<endl;
 
    cout << a[2 * n - 1] << " " << a1 << " " << a[2 * n - 2]; 
 
    for (int i = 0; i < n - 1; ++i) {
        cout << " " << a[i] << " " << a[2 * n - 3 - i]; 
    }
    cout << "\n"; 



}



int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
