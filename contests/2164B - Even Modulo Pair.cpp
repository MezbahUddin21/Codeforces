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

    vector<ll>v(n);

    forl(i,n)cin>>v[i];

    vector<ll>even;
    vector<ll>odd;

    forl(i,n){
        if(v[i]%2==0)even.pb(v[i]);
        else odd.pb(v[i]);
    }


    if(even.size()>=2){
        cout<<even[0]<<space<<even[1]<<endl;
        return;
    }

    n=odd.size();

    forl(i,n-1){
        if((odd[i+1]%odd[i])%2==0){
            cout<<odd[i]<<space<<odd[i+1]<<endl;
            return;
        }
    }

    if(even.size()==1){

        forl(i,n){
            if(odd[i]<even[0]){
                if((even[0]%odd[i])%2==0){
                    cout<<odd[i]<<space<<even[0]<<endl;
                    return;
                }
            }else break;
        }

    }

    forl(i,n-1){
        for(int j=i+1; j<n; j++){

            if((odd[j]%odd[i])%2==0){

                cout<<odd[i]<<space<<odd[j]<<endl;
                return;
            }

        }
    }

    cout<<-1<<endl;

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
