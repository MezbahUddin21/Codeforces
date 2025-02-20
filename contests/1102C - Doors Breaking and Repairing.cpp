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
    int n,x,y; cin>>n>>x>>y;

    vector<int>v(n+1);

    v[n]=INT_MAX;
    

    forl(i,n)cin>>v[i];

    if(x>y){
        cout<<n<<endl;
        return;
    }

    sort all(v);

    int cnt=0;

    forl(i,n){
        if(v[i]<=x){
            cnt++;
            v[i]=0;
            v[i+1]+=y;
        }
    }
    
    cout<<cnt<<endl;
}


 
int main() {
    int t=1;
    // cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
