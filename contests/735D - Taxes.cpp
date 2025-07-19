#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
// #define mod 1000000007
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"YES"<<"\n";
#define pno cout<<"NO"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long int
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

bool isPrime(ll n){
    if(n%2==0 and n!=2)return false;

    if(n==2)return true;

    ll sq=sqrt(n);

    for(ll i=3; i<=sq; i+=2){
        if(n%i==0)return false;
    }

    return true;
    
}

void mine(){

    ll n;cin>>n;
    
    if(isPrime(n)){
        cout<<1<<endl;
        return;
    }

    if(n%2==0){
        if(n==2)cout<<1<<endl;
        else cout<<2<<endl;
        return;
    }

    if(n%2){
        if(isPrime(n-2))cout<<2<<endl;
        else cout<<3<<endl;

        return;
    }

}

int main() {
    fast;
    ll t = 1; 
    // cin>>t;
    // int c=1;
    while (t--){
        // cout<<"Case "<<c<<":"<<endl; c++;
        mine();
    }
    return 0;
}
