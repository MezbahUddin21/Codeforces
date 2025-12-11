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
    a string with at least 1 one
    you want make the string only of 1

    op,
    
        choose d(1-n),
            t as the cyclic right shift of s by d
                cost d coins


*/

void mine(){

    int n; cin>>n;

    string s; cin>>s;
    s=s+s;
    s='#'+s;



    int mx=1;
    int cnt=1;

    for1(i,2*n){
        if(s[i]=='0' and s[i-1]=='0'){
            cnt++;
            mx=max(cnt,mx);
        }else{
            mx=max(cnt,mx);
            cnt=1;
        }
    }

    mx=max(mx,cnt);

    bool f=1;
    for1(i,n){
        if(s[i]=='0'){
            f=0;
        }
    }

    if(f)mx=0;
    cout<<mx<<endl;





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
