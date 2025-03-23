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

    bool fnd=0;

    forl(i,n){
        cin>>v[i];
        if(v[i]==0)fnd=1;
    }

    if(fnd==0){
        cout<<1<<endl;
        cout<<1<<space<<n<<endl;

    }else if(v[0]==0 and v[n-1]==0){

        cout<<3<<endl;

        cout<<1<<space<<n/2<<endl;
        cout<<2<<space<<(n-n/2+1)<<endl;

        cout<<1<<space<<2<<endl;

        
    }else{
        if(v[0]!=0){
            cout<<2<<endl;
            cout<<2<<space<<n<<endl;
            cout<<1<<space<<2<<endl;
        }else {
            cout<<2<<endl;
            cout<<1<<space<<n-1<<endl;
            cout<<1<<space<<2<<endl;
        }
    }



}


 
int main() {
    fast;
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
