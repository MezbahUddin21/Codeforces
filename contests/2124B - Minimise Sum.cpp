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
    
    int n; cin>>n;

    vector<int>v(n);

    // vector<int>mmn(n);

    forl(i,n)cin>>v[i];

    // int mn=v[0];

    // forl(i,n){
    //     mmn[i]=min(mn,v[i]);
    //     mn=mmn[i];
    // }

    if(v[0]<=v[1])cout<<(v[0]+v[0])<<endl;
    else cout<<v[0]+v[1]<<endl;

    // forl(i,n)cout<<mmn[i]<<space;
    // cout<<endl;

    // mn=v[0];

    // int ans=mn;

    // if(v[0]==0){
    //     cout<<0<<endl;
    //     return;
    // }

    // for(int i=1; i<n; i++){
    //     if(v[i]==0){
    //         cout<<mn<<endl;
    //         return;
    //     }
    //     if(v[i]<mn){

    //     }
    // }


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
