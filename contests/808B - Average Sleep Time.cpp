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

    double n,k; cin>>n>>k;

    vector<double>v(n+1,0);

    for1(i,n)cin>>v[i];

    for1(i,n)v[i]+=v[i-1];

    double sum=0;

    for(double i=k; i<=n; i++){
        sum+=v[i]-v[i-k];
    }

    sum/=(n-k+1);

    setprecision(10)<<sum<<endl;


}

int main()
{
    int t=1; 
    // cin>>t;
    
    // int c=1;
    
    while(t--){
        
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }

    return 0;
}
