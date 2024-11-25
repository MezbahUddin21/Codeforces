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

const int mx=2e5+5;
string t,p; 
int v[mx];
bool removed[mx];
int n,m;


bool ok(int val){

    mem(removed,0);

    for(int i=0; i<val; i++){
        removed[v[i]-1]=1;
    }

    for(int i=0,j=0; i<n; i++){

        if(removed[i])continue;

        if(t[i]==p[j])j++;
        if(j==m)return true;
    }

    return false;
}

void mine(){
    cin>>t>>p;

    n=t.size();
    m=p.size();

    for(int i=0; i<n; i++){cin>>v[i];}

    int l=0,r=n-1;
    int ans=0;

    while(l<=r){
        int mid=(l+r)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }

    cout<<ans<<endl;    



}


 
int main() {
    int t=1;
    // cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
