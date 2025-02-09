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


const ll mx = 5e6+5;
vector<bool>isPrime(mx,true);
// vector<ll> primes;


vector<ll>ans(mx+1,0);

vector<ll>cnts(mx,0);
 

void sieve(){

    for(ll i=1; i<mx; i++)ans[i]=i;

    isPrime[0]=false;
    isPrime[1]=false;

    ll sq=sqrt(mx);

    for (int i=2; i<=sq; i++){
        if(isPrime[i]){

            ans[i]=i;

            for (int j =i*i; j<=mx; j+=i){
                isPrime[j]=0;

                ans[j]=i;
            }
        }
    }
    // primes.push_back(2);
    // for (ll i=3; i<=n; i+=2 ) {
    //     if(isPrime[i]==1) {
    //         primes.push_back(i);
    //     }
    // }
}

 

void mine(){

    ll a,b; cin>>a>>b;

    cout<<cnts[a]-cnts[b]<<endl;

}


int main(){


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();

    for(ll i=2; i<mx; i++){
        
        ll cnt=0;

        ll j=i;

        while(j>1){
            ll pF=ans[j];

            while(j%pF==0){
                j/=pF;
                cnt++;
            }
        }

        cnts[i]=cnts[i-1];

        cnts[i]+=cnt;

    }


    int t=1; 
    cin>>t;
    
    while(t--){
        mine();
    }

    return 0;
}
