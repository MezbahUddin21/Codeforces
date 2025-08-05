#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"Yes"<<"\n";
#define pno cout<<"No"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

ll lcm(ll a, ll b){
    return (a*b)/__gcd(a,b);
}

void mine(){   

    ll x; cin>>x;

    ll mn=x;

    for(ll i=1; i*i<=x; i++){
        if(x%i==0){
            if(lcm(i,x/i)==x){
                mn=min(mn,max(i,x/i));
            }
        }
    }

    cout<<x/mn<<space<<mn<<endl;
    

}



int main() {
    fast;
    ll t = 1; 
    // cin>>t;
    // cin.ignore();
    // ll c=1;
    while (t--) {    
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}



