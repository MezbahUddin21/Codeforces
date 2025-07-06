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
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


 
void mine(){

    int a,b,x,y; cin>>a>>b>>x>>y;

    int cnt=0;

    if(a==b){
        cout<<0<<endl;
        return;
    }

    if((a^1)==b ){
        if(a<b){
            cout<<min(x,y)<<endl;
            return;
        }else{
            cout<<y<<endl;
            return;
        }

    }else if(a>b){
        cout<<-1<<endl;
        return;
    }

    if(a<b){
        int ans=0;
        if(x<=y){
            cout<<(b-a)*x<<endl;
            return;
        }else{
            int ans=0;

            int cnt=0;

           ans=(b-a)/2;
           if((b-a)%2==1 and a%2==0)ans++;
           
            cnt=((b-a)-ans)*x;
            ans*=y;
            ans+=cnt;

            cout<<ans<<endl;
        }
    }

}
 
int main() {
    fast;
    int t = 1; 
    cin>>t;
    // int c=1;
    while (t--) {

        // cout<<"Case "<<c<<":"<<endl; c++;
        mine();
    }
    return 0;
}
