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

ll cnt[2000007];


void mine(){
    int n,x; cin>>n>>x;

    forl(i,n+1)cnt[i]=0;

    forl(i,n){
        ll a; cin>>a;
        if(a<=n)cnt[a]++;
    }


    ll ans=0;

    forl(i,n+1){
        if(!cnt[i]){
            if(!cnt[i%x]){
                ans=i;
                break;
            }
            cnt[i%x]--;
        }
        else{
            int a=cnt[i]-1;
            cnt[i]=0;
            cnt[i%x]+=a;
        }
    }
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


