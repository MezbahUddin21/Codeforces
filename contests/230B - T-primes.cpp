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

const int mx = 1e7+10;
vector<bool>isPrime(mx);
set<ll>primes;




void sieve(int n){
    for(int i=3; i<=n; i+=2)isPrime[i]=1;
    int sq=sqrt(n);
    for (int i=3; i<=sq; i+=2){
        if(isPrime[i]){
            for (int j =i*i; j<=n; j+=i+i){
                isPrime[j]=0;
            }
        }
    }
    primes.insert(2);
    for (int i=3; i<=n; i+=2 ) {
        if(isPrime[i]==1) {
            primes.insert(i);
        }
    }
}

 
void mine(){
    ll n; cin>>n;

    ll sq=sqrt(n);

    if(sq*sq==n and primes.count(sq))pyes
    else pno



}
 
int main() {
    fast;

    sieve(mx);

    // forl(i,100)cout<<primes[i]<<space;
    // cout<<endl;

    int t = 1; 
    cin>>t;
    // int c=1;
    while (t--) {

        // cout<<"Case "<<c<<":"<<endl; c++;
        mine();
    }
    return 0;
}
