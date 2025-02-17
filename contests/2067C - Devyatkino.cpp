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


bool isPossible(ll n){
    while(n>0){
        if(n%10==7)return true;
        n/=10;
    }

    return false;
}


void mine(){

    ll n; cin>>n;

    if(isPossible(n)){
        cout<<0<<endl;
        return;
    }


    ll ans=10;
    
    for(ll i=9; i<=999999999;){

        ll l=n;
        for(ll j=1; j<=10; j++){

            l+=i;

            if(isPossible(l))ans=min(ans,j);
        }

        i*=10;
        i+=9;

    }

    cout<<ans<<endl;


}

int main()
{
    int t=1; 
    cin>>t;
    
    while(t--){
        mine();
    }

    return 0;
}
