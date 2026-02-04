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

void mine(){

    int n; cin>>n;

    string s; cin>>s;

    vector<int>v(n,0);

    for(int i=0; i<n; i++){
        if(i==0)v[i]=s[i]-'0';
        else{
            v[i]+=v[i-1]+s[i]-'0';
        }
    }

    int carry=0;
    for(int i=n-1; i>=0; i--){
        carry=v[i]/10;
        if(i>0)v[i-1]+=carry;
        if(i>0)v[i]=v[i]%10;
    }

    bool f=0;
    for(auto it:v){
        if(f==0 and it==0){
            continue;
        }else{
            f=1;
            cout<<it;
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


