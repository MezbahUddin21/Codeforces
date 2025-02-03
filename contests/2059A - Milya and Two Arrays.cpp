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
	int n; cin>>n;

    map<int,int>a;
    map<int,int>b;

    forl(i,n){
        int x; cin>>x;
        a[x]++;
    }
    forl(i,n){
        int x; cin>>x;
        b[x]++;
    }

    if((a.size()>2 or b.size()>2) or( a.size()>1 and b.size()>1))pyes
    else pno

    
}

 
 
 
 
signed main() {
    
    int t=1;
 
    cin>>t;  
 
   
    while(t--){
        mine();
    }
    return 0;
}
