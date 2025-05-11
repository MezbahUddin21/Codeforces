    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define space " "
    #define mod 1000000007
    #define pb push_back
    #define all(v) (v.begin(), v.end())
    #define allr(v) (v.begin(), v.end(),greater<>())
    #define pyes cout<<"YES ";
    #define pno cout<<"NO "<<"\n";
    #define sortv sort(v.begin(),v.end())
    #define sortvg sort(v.begin(),v.end(),greater<>())
    #define ll long long
    #define forl(i,n) for(int i=0;i<n;i++)
    #define for1(i,n) for(int i=1;i<=n;i++)
    #define setprecision(x) cout << fixed << setprecision(x)
    #define mem(a,b) memset(a, b, sizeof(a) )
    #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
    #define lli long long int


    vector<int>primes;
    
    void sieve() {
        vector<bool> isPrime(1e7 + 5, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i < 1e7 + 5; ++i) {
            if (isPrime[i]) {
                primes.pb(i);
                for (int j = i + i; j < 1e7 + 5; j += i) {
                    isPrime[j] = false;
                }
            }
        }

    }

    void mine() {
        int n; cin>>n;

        int ans=0;

        for(auto it:primes){
            if(it<=n)ans+=n/it;
            else break;
        }

        cout<<ans<<endl;

    }

    int main() {
        fast;
        sieve();

        int t = 1;
        cin>>t;
        while (t--) {
            mine();
        }
        return 0;
    }
