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

    int n,k; cin>>n>>k;

    string s; cin>>s;
    int cnt=0;
    for(int i=n-1; i>=0; i--){
        if(s[i]=='B')cnt++;

    }

    if(cnt==k)cout<<0<<endl;
    else if(cnt>k){
        int lim=cnt-k;
        int ct=0;
        forl(i,n){
            if(s[i]=='B')ct++;
            if(ct==lim){
                cout<<1<<endl;

                cout<<i+1<<space<<'A'<<endl;
                return;
            }
        }
    }else{
        int lim=k-cnt;
        int ct=0;
        forl(i,n){  
            if(s[i]=='A')ct++;
            if(ct==lim){
                cout<<1<<endl;
                cout<<i+1<<space<<'B'<<endl;
                return;
            }
        }
    }



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
