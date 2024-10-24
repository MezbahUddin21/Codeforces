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
    int arr[n][n];

    ll res=0;

    forl(i,n){
        forl(j,n){
            cin>>arr[i][j];
        }
    }

    int l,r;
    
    for(int i=1; i<n; i++){
        int mn=INT_MAX;
        l=i,r=0;
        while(l<n and r<n){
            mn=min(mn,arr[l][r]);
            l++;
            r++;
        }
        if(mn<0)res+=abs(mn);
    }

    for(int i=n-1; i>=0; i--){
         l=0,r=i;
        int mn=INT_MAX;
        while(l<n and r<n){
            mn=min(mn,arr[l][r]);
            l++;
            r++;
        }
        if(mn<0)res+=abs(mn);
    }




    cout<<res<<endl;
    
}



 
signed main() {
    int t;
    cin>>t;

   
    while(t--){
        mine();
    }
    return 0;
}


