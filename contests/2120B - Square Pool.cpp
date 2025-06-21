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


void mine(){

    int n,s; cin>>n>>s;

    vector<vector<int>>v(n,vector<int>(5));

    forl(i,n){

        int dx, dy, x,y; cin>>dx>>dy>>x>>y;

            v[i][1]=dx;
            v[i][2]=dy;
            v[i][3]=x;
            v[i][4]=y;


    }

    ll ans=0;

    forl(i,n){
        if(v[i][1]!=v[i][2] and (v[i][3]+v[i][4])%s==0)ans++;
        else if(v[i][1]==v[i][2] and abs(v[i][3]-v[i][4])%s==0)ans++;
    }

    cout<<ans<<endl;


   
}
 
int main() {
    fast;
    int t = 1; 
    cin>>t;
    // int c=1;
    while (t--) {

        // cout<<"Case "<<c<<":"<<endl; c++;
        mine();
    }
    return 0;
}
