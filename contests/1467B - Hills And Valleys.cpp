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

vector<int>v;

bool ok(int i){
    return (i>0 and i<(v.size()-1));
}

bool intm(int i){

    if(!ok(i))return false;

    if(v[i]>v[i+1] and v[i]>v[i-1])return true;

    if(v[i]<v[i+1] and v[i]<v[i-1])return true;
    
    return false;
}


void mine(){

  int n; cin>>n;
  v.resize(n);
  forl(i,n)v[i]=0;

  int ans=0;

  forl(i,n)cin>>v[i];

  forl(i,n){
    if(i!=0 and i!=n){
        ans+=intm(i);
    }
  }

//   cout<<ans<<endl;

int tans=ans;


forl(i,n){
    if(!ok(i))continue;

    int curIntm=intm(i-1)+intm(i)+intm(i+1);

    int temp=v[i];

    v[i]=v[i+1];
    ans=min(ans,tans-curIntm+intm(i-1)+intm(i)+intm(i+1));

    v[i]=v[i-1];
    ans=min(ans,tans-curIntm+intm(i-1)+intm(i)+intm(i+1));
    

    v[i]=temp;

}


    cout<<ans<<endl;
    

}

int main() {
    fast;
    int t = 1;
    cin>>t;
    while (t--) {
        mine();
    }
    return 0;
}
