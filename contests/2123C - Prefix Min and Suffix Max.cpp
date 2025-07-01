#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 998244353
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

    int n; cin>>n;

    vector<int>v(n);

    vector<int>mnp(n);
    vector<int>mxp(n);

    int mn=INT_MAX,mx=0;

    forl(i,n){
        cin>>v[i];
    }
    mnp[0]=mn=v[0];
    mxp[n-1]=mx=v[n-1];

    for1(i,n-1){
        mn=min(mn, v[i]);

        mnp[i]=mn;

    }

    for(int i=n-2; i>=0; i--){
        mx=max(mx, v[i]);

        mxp[i]=mx;

    }


    forl(i,n){
        if((i==0?INT_MAX:mnp[i-1])>v[i] or ((i==n-1)?0:mxp[i+1])<v[i])cout<<1;
        else cout<<0;
    }cout<<endl;



}

int main()
{
    int t=1; 
    cin>>t;
    
    // int c=1;


    
    while(t--){
        
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }

    return 0;
}
