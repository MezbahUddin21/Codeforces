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
    int n,a,b,c; cin>>n>>a>>b>>c;

    int s=a+b+c;

    int ans;

    ans=n/s;
    ans*=3;

    int m=n%s;

    if(m==0){
        cout<<ans<<endl;
        return;
    }

    if(m>a+b)ans+=3;
    else if(m>a)ans+=2;
    else if(m<=a)ans+=1;

    cout<<ans<<endl;

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


