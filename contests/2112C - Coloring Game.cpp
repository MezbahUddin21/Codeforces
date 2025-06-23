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

    ll n; cin>>n;

    vector<ll>v(n);

    forl(i,n)cin>>v[i];


    sort all(v);
    ll ways=0;

    forl(i,n){
        ll b,a=v[i]+v[i];

        if(i!=n-1){
           b=v[n-1];

        }else b=v[n-2];

        ll tem=max(a,b)-v[i];

        ll l=0,r=i-1;

        while(l<r){
            ll mid=r-l;;

            if(tem>=v[l]+v[r])l++;
            else{
                ways+=mid;
                r--;
            }
        }

    }

    cout<<ways<<endl;

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
