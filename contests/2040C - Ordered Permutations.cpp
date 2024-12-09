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


void mine(){
    ll n,k; cin>>n>>k;

    ll L=0;
    while((1LL<<L) <k)L++;

    if(L>=n){
        cout<<-1<<endl;
        return;
    }

    deque<ll>l,r;

    for(ll i=1; i<=n; i++){
        if(n-i-1>45)l.pb(i);
        else{
            if(1ll<<(n-i-1)>=k)l.pb(i);
            else{
                k-=(1ll<<(n-i-1));
                r.push_front(i);
            }
        }
    }

    for(auto i:l)cout<<i<<space;
    for(auto i:r)cout<<i<<space;
    cout<<endl;


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


