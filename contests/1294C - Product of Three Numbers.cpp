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

int a=-1,b=-1,c=-1;
ll l=-1;

bool isPrime(ll n){

    for(ll i=2; i*i<=n; i++){
        if(n%i==0 and i!=a and i!=n/i){
            l=i;
            return false;
        }
    }

    return true;
}


void mine(){
    ll n; cin>>n;

    a=-1,b=-1,c=-1;


    if(n<24 or isPrime(n)){
        pno
        return;
    }

    int r=n/l;

    a=l;

    if(isPrime(r)){
        pno
        return;
    }

    b=l;
    c=r/l;

    pyes;

    cout<<a<<space<<b<<space<<c<<endl;


}


 
int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
