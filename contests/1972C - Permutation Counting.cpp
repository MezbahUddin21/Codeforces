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

/*


*/

void mine(){

    ll n,k; cin>>n>>k;

    vector<ll>v(n);

    forl(i,n)cin>>v[i];

    sort all(v);

    // ll rise=0;
    ll mn=v[0];
    // int ind=0;

    for1(i,n-1){

            ll diff=v[i]-v[i-1];

            if((diff*i)<=k){
                k-=(diff*i);
                mn+=diff;
            }else{
                mn+=k/i;
                k-=i*(k/i);
            }

            

            // while(l<=r){
            //     ll mid=(l+r)/2;
            //     if(mid*(i+1)<=k){
            //         rise=mid;
            //         l=mid+1;
            //     }else{
            //         r=mid-1;
            //     }
            // }

            // if(rise==0){
            //     ind=i;
            //     k%=i;
            //     break;
            // }
            // else{
            //     k-=(rise*(i));
            //     mn+=rise;
            // }


    
    }

    ll ans=mn*n-(n-1)+k;

    for(int i=0; i<n; i++){
        if(v[i]>mn)ans++;
    }

    cout<<ans<<endl;

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
