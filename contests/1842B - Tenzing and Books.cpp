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
#define fast {ios_base::sync_with_stdio(false); cin.tie(0);}


void mine(){
    ll n, x; cin>>n>>x;

    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n);


    forl(i,n)cin>>a[i];
    forl(i,n)cin>>b[i];
    forl(i,n)cin>>c[i];

    ll ans=0;

    forl(i,n){
        if(a[i]<=x and (x&a[i])==a[i])ans=ans|a[i];
        else break;
    }
    forl(i,n){
        if(b[i]<=x and (x&b[i])==b[i])ans=ans|b[i];
        else break;
    }
    forl(i,n){
        if(c[i]<=x and( x&c[i])==c[i])ans=ans|c[i];
        else break;
    }

    if(ans==x)pyes
    else pno


}



 
int main() {
    fast
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}


