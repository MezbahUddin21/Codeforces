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

    if(n==1 or n==3){
        cout<<-1<<endl;
        return;
    }


    if(n%2){
        forl(i,n-4)cout<<3;
        cout<<6366<<endl;
    }else{
        forl(i,n-2)cout<<3;
        cout<<66<<endl;
    }
    
}



 
signed main() {
    int t; 
    cin>>t;

   
    while(t--){
        mine();
    }
    return 0;
}


