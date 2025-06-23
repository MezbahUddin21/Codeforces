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

    ll mn=INT_MAX;

    forl(i,n-1){
        if(abs(v[i]-v[i+1])<=1){
            cout<<0<<endl;
            return;

        }
    }

    for(ll i=0; i<n-2; i++){

            ll l=-1,r=-1;
            for(ll j=i+1; j<n; j++){
                if(v[j]==v[i] or abs(v[j]-v[i])<=1){
                    mn=min(mn,j-i-1);
                }
                else if(v[j]<v[i])l=j;
                else if(v[j]>v[i])r=j;

                if(l!=-1 and r!=-1){
                    mn=min(mn,max(l,r)-i-1);
                }
            }
    }

    for(ll i=n-1; i>=2; i--){

            ll l=-1,r=-1;
            for(ll j=i-1; j>=0; j--){
                if(v[j]==v[i] or abs(v[j]-v[i])<=1){
                    mn=min(mn,i-j-1);
                }
                else if(v[j]<v[i])l=j;
                else if(v[j]>v[i])r=j;

                if(l!=-1 and r!=-1){
                    mn=min(mn,i-min(l,r)-1);
                }
            }
    }

    if(mn==INT_MAX)cout<<-1<<endl;
    else

    cout<<mn<<endl;

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
