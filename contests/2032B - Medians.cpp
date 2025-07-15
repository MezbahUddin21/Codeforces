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

    int n,k; cin>>n>>k;


    if(k==1 and n==1){
        cout<<1<<endl;
        cout<<1<<endl;
        return;
    }

    if(k%2==0 and k>1 and k+1<=n){
        cout<<3<<endl;
        cout<<1<<space<<k<<space<<k+1<<endl;
    }else if(k%2==1 and k-1>1 and k+2<=n){

    cout<<3<<endl;
    cout<<1<<space<<k-1<<space<<k+2<<endl;
    }else cout<<-1<<endl;

}




 
signed main() {
    ios::sync_with_stdio(0),cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;

//    int c=1;
    while(t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}


