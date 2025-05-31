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

// int findd(int n){

//     if()

// }

void mine(){

    ll n; cin>>n;

    ll ans=0;

    if(n==0){cout<<ans+1<<endl;return;}
    else if(n<3){
        ans+=(n%3+1);
        cout<<ans<<endl;
        return;
    }

    ans+=((n/15)*3);

    n=n%15;

    if(n==0)cout<<ans+1<<endl;
    else if(n<3){
        ans+=(n%3+1);
        cout<<ans<<endl;
    }else {
        ans+=3;

        cout<<ans<<endl;
    }

    // if(n%15==0)cout<<ans<<endl;
    // else if(n%15==1)cout<<ans+1<<endl;
    // else cout<<ans+2<<endl;

    
}



 
signed main() {
    int t=1;

    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}


