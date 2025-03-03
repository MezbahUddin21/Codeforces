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

    int cnt1=0;
    int cnt0=0;

    forl(i,n)if(s[i]=='1')cnt1++;
    else cnt0++;

    if(cnt1==n){
        cout<<"DRAW"<<endl;
        return;
    }

    if(cnt0==1){
        cout<<"BOB"<<endl;
        return;
    }

    if(cnt0%2){
        cout<<"ALICE"<<endl;

    }else cout<<"BOB"<<endl;
    
}


 
int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
