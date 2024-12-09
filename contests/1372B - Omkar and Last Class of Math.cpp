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
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast {ios_base::sync_with_stdio(false); cin.tie(0);}

ll lcm(ll a, ll b) {
    ll g = __gcd(a, b);
    return (a * b / g);
}


void mine(){
    ll n; cin>>n;

    if(n%2==0){
        cout<<n/2<<space<<n/2<<endl;
    }else{
        for(ll i=2; i*i<=n; i++){
            if(n%i==0){
                int a=n/i;
                int b=a*(i-1);
                cout<<a<<space<<b<<endl;
                return;
            }
        }

        cout<<1<<space<<n-1<<endl;
    }


}



 
int main() {
    fast
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}


