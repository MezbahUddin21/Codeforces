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
    
int cnt[200010];

int v[200010];


void mine(){
    int n; cin>>n;

    forl(i,200010)cnt[i]=0;

    for1(i,n){
        cin>>v[i];

        cnt[v[i]]++;
    }

    int mx=0,l=0,r;

    for1(i,n){
        if(cnt[v[i]]>1)l=i;
        else if(i-l>mx){
            mx=i-l;
            r=i;
        }
    }

    if(mx==0)cout<<0<<endl;
    else{
        cout<<r-mx+1<<space<<r<<endl;
    }

}


 
int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
