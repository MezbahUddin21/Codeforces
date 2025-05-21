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

    int f=0;

    if(n==2){
        if(s[0]=='A' and s[0]!=s[n-1]){f=1; }
        else if(s[0]=='B' and s[0]!=s[n-1]){f=0;}

        if(f)cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
        return;
    }

    if(s[0]==s[n-1]){
        if(s[0]=='A')f=1;
        else f=0;


        if(f)cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
        return;

    }
    if(s[n-1]==s[n-2]){
        if(s[n-2]=='A')f=1;
        else f=0;


        if(f)cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
        return;
    }

    if(s[n-1]=='A'){
        cout<<"Bob"<<endl;
    }else {
        int a=0;
        
        for(auto i:s)a+=(i=='B');

        if(a>1)f=0;
        else f=1;
        if(f)cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
        return;
    }




}



 
signed main() {
    int t=1;

   cin>>t;
    while(t--){
        mine();
    }
    return 0;
}


