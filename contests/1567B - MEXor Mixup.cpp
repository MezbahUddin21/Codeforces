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
#define print(v,i,n) for(i;i<n;i++){cout<<v[i]<<" "}cout<<endl; 
#define setprecision(x) cout << fixed << setprecision(x)
void mezbah(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void printt(vector<int> v){
    cout<<v.size()<<endl;
    for(int i=1; i<=v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}
// set<int>primes;
// void seive(int n){
//     set<int>s;
//     vector<int>v(n+3);
//     for(int i=2; i*i<=n; i++){
//         if(v[i]==0){
//             for(int j=i*i; j<=n; j+=i){
//                 v[j]=1;
//             }
//         }
//     }
//     for(int i=2; i<=n; i++){
//         if(v[i]==0)s.insert(v[i]);
//     }
// }

vector<ll> mPrimeFact(ll x) {
vector<ll> fact;
for(ll i = 2; i * i <= x; i++) {
ll cnt = 0;
while(x % i == 0) {
cnt++;
x /= i;
fact.push_back(i);
}
}
    if(x > 1) fact.push_back(x);
    return fact;
}

ll lcm(ll a,ll b){
    ll g=__gcd(a,b);
    return (a*b/g);
}



int cel(int a,float l){
    return ceil(a/l);
}
ll max_subarr(vector <ll>v){
    int n=v.size();
    ll max_sum,curr_sum;
    max_sum=curr_sum=0;
    for(int i=0; i<n; i++){
        curr_sum=max(curr_sum+v[i],v[i]);
        max_sum=max(max_sum, curr_sum);
    }  
    return max_sum;
}
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

vector<int> primes;
 
void sieve() {
    vector<bool> isPrime(1e5 + 5, true);
    isPrime[0] = isPrime[1] = false;
 
    for (int i = 2; i < 1e5 + 5; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i + i; j < 1e5 + 5; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

 
int main() {
    mezbah();
    int t;
    cin>>t;
    int N=3e5+5;

    vector<int>v(N,0);
    for(int i=1; i<N; i++){
            v[i]=v[i-1]^i;
    };
    
    while(t--){
        int a,b; cin>>a>>b;
        int ans=a;
        int val =v[a-1];
        if(val!=b){
            int r=val^b;
            if(r==a)cout<<ans+2<<endl;
            else cout<<ans+1<<endl;
        }else cout<<ans<<endl;
    }
    return 0;
}

