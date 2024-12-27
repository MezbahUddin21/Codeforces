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
    string s; cin>>s;

    int n=9;

    int a=0,b=0;

    int ans=9;

    for(int i=0; i<=n; i++){
        if(i%2==0)a+=s[i]!='0';
        else b+=s[i]=='1';

        if(a>b+(10-i)/2)ans=min(ans,i);
        if(b>a+(9-i)/2)ans=min(ans,i);
    }

    a=0,b=0;
    
    for(int i=0; i<=n; i++){
        if(i%2==0)a+=s[i]=='1';
        else b+=s[i]!='0';

        if(a>b+(10-i)/2)ans=min(ans,i);
        if(b>a+(9-i)/2)ans=min(ans,i);
    }

    cout<<ans+1<<endl;
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


