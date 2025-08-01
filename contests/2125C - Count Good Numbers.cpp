#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000003
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
    
    ll l,r; cin>>l>>r;

    ll ans=(r/2)-(l-1)/2+(r/3)-(l-1)/3+(r/5)-(l-1)/5+(r/7)-(l-1)/7;


    vector<int>prime={2,3,5,7};

    vector<int>pMul={6,10,14,15,21,35,210};

    forl(i,pMul.size()){
        
            ans-=((r/pMul[i])-((l-1)/pMul[i]));
        
    }

    vector<int>c={30,42,70,105};
    forl(i,c.size()){
        
            ans+=((r/c[i])-((l-1)/c[i]));
        
    }
    // cout<<endl;

    cout<<r-l+1-ans<<endl;

}
 
int main() {
    fast;
    
    ll t = 1; 
    cin>>t;
    // ll c=1;
    while (t--) {

        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
