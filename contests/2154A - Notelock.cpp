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

    int n,k; cin>>n>>k;

    string s; cin>>s;

    s='0'+s;

    int ans=0;
    k-=1;

    for(int i=1; i<=n; i++){

        int cnt=0;
        bool f=0;
        if(s[i]=='1'){
            for(int j=i-1; j>=0; j--){
                cnt++;
                if(cnt>k)break;
                if(s[j]=='1'){
                    f=1;
                }

            }

            if(!f)ans++;
        }

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
