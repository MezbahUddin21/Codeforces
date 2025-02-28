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


void mine(){
    ll n; cin>>n;

    vector<ll>v(n+1);

    for1(i,n)cin>>v[i];

    vector<ll>cal;
    vector<ll>sec;

    for1(i,n){
        if(v[i]<i){
            cal.pb(v[i]);
            sec.pb(i);
        }
    }

    ll cnt=0;

    for(auto i:cal){

        ll it=lower_bound(sec.begin(),sec.end(),i)-sec.begin();


        cnt+=it;
    }


    cout<<cnt<<endl;

}


 
int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
