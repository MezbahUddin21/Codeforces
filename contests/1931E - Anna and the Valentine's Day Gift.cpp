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
    a list a of n int
    sugg destroy it

    1. 

*/

void mine(){

    
    int n; cin>>n;
    int m; cin>>m;

    vector<pair<int,int>>check;


    forl(i,n){
        int x; cin>>x;

        int cntz=0;
        int xx=x;
        while(x%10==0){
            cntz++;
            x/=10;
            
        }
        check.pb({cntz,xx});

    }


    sort allr(check);

    ll sz=0;

    ll mx=0;

    forl(i,n){
        ll cur=-check[i].first;
        if(i%2==0){
            ll x=check[i].second;
            while(x){
                cur++;
                x/=10;
            }
            sz+=cur;
        }else{
            cur=0;
            ll x=check[i].second;
            while(x){
                cur++;
                x/=10;
            }
            sz+=cur; 
        }
    }

    // cout<<sz<<endl;

    if(sz>=m+1)cout<<"Sasha"<<endl;
    else cout<<"Anna"<<endl;



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
