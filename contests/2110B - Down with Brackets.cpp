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

    string s; cin>>s;

    int n=s.size();

    int ans=0;

    int cnt=0;

    for(int i=0; i<n; i++){

        if(s[i]=='(')cnt++;
        else cnt--;

        if(cnt==0)ans++;

    }


    if(ans>1)pyes
    else pno

    
}



 
signed main() {
    int t=1;

    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}


