
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
   

    int n,k; cin>>n>>k;


    string s; cin>>s;


    int one=0,zero=0;

    forl(i,n){
        if(s[i]=='1')one++;

        else zero++;
    }


    if(zero>one)swap(zero,one);

    while(k--){
        if(max(zero,one)<2){
            pno
            return;
        }
        else {
            if(zero>one)swap(zero,one);
            one-=2;

        }
    }

    if(one!=zero)pno
    else pyes

}



 
signed main() {
    int t=1;
    cin>>t;
    while(t--){
        mine();
    }
    return 0;
}


