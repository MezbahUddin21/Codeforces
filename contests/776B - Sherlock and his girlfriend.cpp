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


vector<int>d(1000000+10,0);

 
void mine(){

    int n; cin>>n;

    if(n<=2){
        cout<<1<<endl;

        forl(i,n)cout<<1<<space;
        return;
    }

    cout<<2<<endl;

    for(int i=2; i<=n+1; i++){
        if(d[i]==0){
            d[i]=1;
            for(int j=i+i; j<=n+1; j+=i){
                d[j]=2;
            }
        }
    }

    for(int i=2; i<=n+1; i++){
        cout<<d[i]<<space;
    }

    

}
 
int main() {
    fast;
    ll t = 1; 
    // cin>>t;
    // int c=1;
    while (t--){
        // cout<<"Case "<<c<<":"<<endl; c++;
        mine();
    }
    return 0;
}
