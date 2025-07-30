#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000003
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

#define f first
#define s second

vector<int>fib(15);
 
void mine(){

    ll n,m; cin>>n>>m;

    vector<vector<int>>v(m,vector<int>(4));

    forl(i,m){
        int a,b,c;
        cin>>a>>b>>c;

        if(fib[n]<=a and fib[n]<=b and fib[n]<=c){

            if((fib[n]+fib[n-1])<=a or (fib[n]+fib[n-1])<=b or (fib[n]+fib[n-1])<=c){
                cout<<1;
            }else cout<<0;

        }else{
            cout<<0;
        }


    }
        cout<<endl;


    
}
 
int main() {
    fast;

    fib[1]=1;
    fib[2]=2;

    for(int i=3; i<=14; i++){
        fib[i]=fib[i-1]+fib[i-2];

        // cout<<fib[i]<<space;
    }
    // cout<<endl;
    
    ll t = 1; 
    cin>>t;
    // ll c=1;
    while (t--) {

        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
