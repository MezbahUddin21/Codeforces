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

const int mx=200005;
int master[mx],ans[mx];


int fnd(int a){
    if(master[a]==-1)return a;
    return master[a]=fnd(master[a]);
}
 
void unite(int a,int b){
    a=fnd(a),b=fnd(b);
    if(a==b)return;
    master[b]=a;
    ans[a]+=ans[b];
}
 
void mine(){
	int n;
    cin>>n;

    int v[n+1];
    for1(i,n){
        cin>>v[i];
    }
 
    string s;
    cin>>s;
    s='#'+s;


    for1(i,n)master[i]=-1;

    for1(i,n){
        ans[i]=(s[i]=='0'?1:0);
    }
 
    for1(i,n){
        unite(i,v[i]);
    }
 
    for1(i,n){
        cout<<ans[fnd(i)]<<space;
    }
    cout<<endl;
}

 
 
 
 
signed main() {
    
    int t=1;
 
    cin>>t;  
 
   
    while(t--){
        mine();
    }
    return 0;
}
