#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
// #define mod 1000000007
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"YES"<<"\n";
#define pno cout<<"NO"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long int
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


void mine(){
    int n; cin>>n;

    vector<int>v(n);

    forl(i,n)cin>>v[i];


    int l=0, r=0;

    int best=0;


    for(int i=0; i<n; i++){
            int opinv=0;
            int inv=0;
        for(int j=i+1; j<n; j++){
            if(v[i]>v[j])inv++;
            else if(v[i]<v[j])opinv++;

            if(best<inv-opinv){
                best=inv-opinv;
                l=i;
                r=j;
            }
        }
    }

    cout<<l+1<<space<<r+1<<endl;

    
}


int main() {


    fast;
    ll t = 1; 
    cin>>t;
    // int c=1;
    while (t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}

