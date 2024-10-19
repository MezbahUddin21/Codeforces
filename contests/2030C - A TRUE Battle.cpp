#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"YES"<<"\n";
#define pno cout<<"NO"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)



void mine(){
    int n; cin>>n;
    string s; cin>>s;
    
    if(s[0]=='1' or s[n-1]=='1'){
        pyes
        return;
    }

    for(int i=1; i<n;i++){
        if(s[i]=='1' and s[i-1]=='1'){
            pyes
            return;
        }
    }

    int one=0,zero=0;
    forl(i,n){
        if(s[i]=='1')one++;
        else zero++;
    }
 
    if(one>=zero){
        pyes
        return;
    }

    pno

}


 
int main() {
    int t;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
