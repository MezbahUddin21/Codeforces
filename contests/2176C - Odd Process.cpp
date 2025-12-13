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
#define forl(i,n) for(ll i=0;i<n;i++)
#define for1(i,n) for(ll i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

/*
    n coins with denominations and natural k
    also have a bag
        empty
        can place coins
        need to perform k actions
            each action,
                take one coin from those left and put in bag
                after you can no longer can take that bag


*/

void mine(){

    ll n; cin>>n;

    vector<ll>v(n);

    vector<ll>odd;
    vector<ll>even;

    forl(i,n){
        cin>>v[i];
        if(v[i]%2)odd.pb(v[i]);
        else even.pb(v[i]);
    }

    sort allr(even);
    sort allr(odd);


    ll es=even.size();
    ll os=odd.size();

    if(os==0){
        forl(i,n)cout<<0<<space;
        cout<<endl;
        return;
    }else if(es==0){
        forl(i,n){
            if(i%2)cout<<0<<space;
            else cout<<odd[0]<<space;
        }

        cout<<endl;
        return;
    }

    vector<ll>pref(n,0);

    pref[0]=odd[0];
    for1(i,es){
        pref[i]=pref[i-1]+even[i-1];
    }

    // cout<<os<<endl;

    forl(i,n){
        ll check=i+1;
        if(check<=es+1){
            cout<<pref[i]<<space;
        }
        else{

            for(int i=1; i<os; i+=2){
                if(i+1<os){
                    cout<<pref[es-1]<<space<<pref[es]<<space;
                }else cout<<0<<space;
            }

            break;
        }
    }
    
    cout<<endl;


}

int main() {
    fast;
    ll t = 1;
    cin>>t;
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
