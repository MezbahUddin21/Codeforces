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
#define int long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)

const int mxN=1e6+5;
map<int,int>primes;
 
void sieve() {
    vector<bool> isPrime(mxN, true);
    isPrime[0] = isPrime[1] = false;
 
    for (int i = 2; i < mxN; ++i) {
        if (isPrime[i]) {
            primes[i]=1;
            for (int j = i + i; j < mxN; j += i) {
                isPrime[j] = false;
            }
        }
    }
}



void mezbah(){
    int n; cin>>n;
    while(n--){
        int x; cin>>x;

        if(x==4){
            pyes
            continue;
        }
        int sq=sqrt(x);

        if(sq*sq==x  and primes[sq]==1){
            pyes
        }else pno
    }
}



 
signed main() {
    // int t;
    // cin>>t;
    sieve();
   
    // while(t--){
        mezbah();
    // }
    return 0;
}


