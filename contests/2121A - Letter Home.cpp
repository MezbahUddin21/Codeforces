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
    int n, s; cin>>n>>s;

    vector<int>v(n);

    forl(i,n)cin>>v[i];

    sort all(v);

    int a=v[0];
    int b=v[n-1];


    int mx=max(abs(a-s), abs(b-s));

    int mn=min(abs(a-s), abs(b-s));

    if(a==b){
        cout<<abs(a-s)<<endl;
    }else if(a>=s){
        cout<<b-s<<endl;
    }else if(b<=s){
        cout<<s-a<<endl;
    }
    else {
        cout<<2*mn+mx<<endl;
    }
 
}
 
int main() {
    fast;
    int t = 1; cin>>t;
    int c=1;
    while (t--) {

        // cout<<"Case "<<c<<":"<<endl; c++;
        mine();
    }
    return 0;
}
