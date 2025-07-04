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

    string a,b; cin>>a>>b;

    int n=a.size();
    
    int ans=0;

    bool f=0;

    forl(i,n){
        if(!f){
            if(a[i]==b[i]){
                ans+=2;
            }else if(b[i]-1==a[i]){
                ans++;
                f=1;
            }else break;
        }else if(f){
            if(a[i]=='9' && b[i]=='0')ans++;
            else break;
        }
    }

    cout<<ans<<endl;

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
