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

    int n,k; cin>>n>>k;

    if(n==2){
        cout<<"2 1"<<endl;
        return;
    }else{

        if(k%2==0){
            for(int i=1; i<=n; i++){

                if(i==n-1){
                    cout<<n<<space;
                    continue;
                }
                cout<<n-1<<space;
            }cout<<endl;
        }else{
            for(int i=1; i<=n; i++){
                if(i==n){
                    cout<<n-1<<space;
                    continue;
                }
                cout<<n<<space;
            }cout<<endl;
        }
    }

    cout<<endl;

}



int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
