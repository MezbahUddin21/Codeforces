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


const int mx = 2*1e4+5;
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

void mine(){

    int n; cin>>n;

    vector<int>a(n);


    map<int,int>mp;
    int ff=0;

    forl(i,n){
        cin>>a[i];
        mp[a[i]]++;

        if(mp[a[i]]>1 and a[i]!=1){
            ff=1;
        }
    }
    int l;
    forl(i,n)cin>>l;

    if(ff){
        cout<<0<<endl;
        return;
    }

    int sz=200007;
    vector<int>cnt(sz);


    forl(i,n){

        ll aa=a[i];

        for(ll j=0; j<=primes.size(); j++){

            ll p=primes[j];

            if(p*p>aa){
                break;
            }

            int f=0;
            while(!(aa%p)){
                aa/=p;
                
                if(!f)cnt[p]++;
                f=1;

                if(cnt[p]>1){
                    cout<<0<<endl;
                    return;
                }

            }
        }
        
        if(aa>1)cnt[aa]++;
        if(cnt[aa]>1){
            cout<<0<<endl;
            return;
        }

    }


    // forl(i,100)cout<<cnt[i]<<space;

    // cout<<endl;
    // for1(i,sz){
    //     if(cnt[i]>1){
    //         cout<<0<<endl;
    //         return;
    //     }
    // }


    forl(i,n){

        ll updated_a=a[i]+1;

        for(ll j=0; j<=primes.size(); j++){

            ll p=primes[j];

            if(p*p>updated_a){
                break;
            }

            int f=0;
            while(!(updated_a%p)){
                updated_a/=p;
                
                if(cnt[p]>0){
                    cout<<1<<endl;
                    return;
                }

            }


        }

        if(cnt[updated_a]>0){
            cout<<1<<endl;
            return;
        }


    }

    // forl(i,100)cout<<cnt1[i]<<space;

    // cout<<endl;

    cout<<2<<endl;

}

int main() {
    fast;
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
