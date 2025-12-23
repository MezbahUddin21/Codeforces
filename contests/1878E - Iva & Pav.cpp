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

    ll n; cin>>n;

    vector<ll>v(n+1);

    for1(i,n)cin>>v[i];

    vector<vector<int>>preb(n+1,vector<int>(31,0));

    for1(i,n){
        ll el=v[i];
        forl(j,31){
            preb[i][j]=preb[i-1][j]+((el>>j)&1);
            // cout<<preb[i][j]<<space;
        }
        // cout<<endl;
    }




    ll q; cin>>q;


    while(q--){
        
        ll ans=-1;

        ll k,l; cin>>l>>k;

        ll right=n;
        
        ll left=l;

        if(v[l]<k){
            cout<<-1<<space;
            continue;
        }
        
        while(left<=right){

            ll mid=(left+right)/2;

            bool f=1;

            ll kk=k;

            ll num=0;

            forl(j,31){
                // if((kk>>j) & 1){
                    if(preb[mid][j]-preb[l-1][j]==mid-l+1){
                        num+=1<<j;
                    }
                // }
            }

            if(num>=k){
                left=mid+1;
                ans=mid;
            }else{
                right=mid-1;

            }

        }

        cout<<ans<<space;

    }


    cout<<endl;




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
