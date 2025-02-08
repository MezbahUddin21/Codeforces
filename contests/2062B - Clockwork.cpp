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

    vector<int>v(n);

    forl(i,n)cin>>v[i];

    forl(i,n){
            if((i*2)>=v[i] or ((n-i-1)*2)>=v[i]){
                pno
                return;
            }
        
    }

    pyes
    
};

int main()
{
    int t=1; 
    cin>>t;
    
    while(t--){
        mine();
    }

    return 0;
}
