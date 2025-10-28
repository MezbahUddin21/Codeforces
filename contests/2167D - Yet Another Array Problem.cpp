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
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

/*


*/


const int mx = 1e5+1;
vector<bool>isPrime(mx);
vector<int> primes;


void sieve(int n){
    for(int i=3; i<=n; i+=2)isPrime[i]=1;
    int sq=sqrt(n);
    for (int i=3; i<=sq; i+=2){
        if(isPrime[i]){
            for (int j =i*i; j<=n; j+=i){
                isPrime[j]=0;
            }
        }
    }
    primes.push_back(2);
    for (int i=3; i<=n; i+=2 ) {
        if(isPrime[i]==1) {
            primes.push_back(i);
        }
    }
}

vector<ll>check(20+1,0);

void mine(){

    
    ll n; cin>>n;

    vector<ll>v(n);

    forl(i,n)cin>>v[i];
    ll gc=v[0];
    forl(i,n){

        gc=__gcd(gc,v[i]);
    }

    // cout<<"g"<<gc<<endl;


    forl(i,1000){
        if(gc%primes[i]){
            cout<<primes[i]<<endl;
            return;
        }
    }


    cout<<-1<<endl;



}

int main() {
    fast;

    // ll mul=1;

    // for(ll i=1; i<=20; i++){
    //     mul*=i;
    //     check[i]=mul;
    // }

    // for(ll i=1; i<=18; i++){
    //     cout<<check[i]<<space;
    // }
    // cout<<endl;

    sieve(mx);
    ll t = 1;
    cin>>t;
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
