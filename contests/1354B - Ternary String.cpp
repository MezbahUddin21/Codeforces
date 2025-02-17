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

    string s; cin>>s;

    int n=s.size();

    int a=-1,b=-1,c=-1;

    int ans= INT_MAX;
    bool f=0;

    forl(i,n){
        if(s[i]=='1')a=i;
        else if(s[i]=='2')b=i;
        else if(s[i]=='3')c=i;
    
         if(a!=-1 and b!=-1 and c!=-1){
             f=1;
            ans=min(ans,1+ max(abs(a-b),max(abs(a-c),abs(b-c))));

        }

    }


    if(!f)cout<<0<<endl;

    else cout<<ans<<endl;


}

int main()
{
    int t=1; 
    cin>>t;
    
    while(t--){
        mine();
    }

    return 0;
}
