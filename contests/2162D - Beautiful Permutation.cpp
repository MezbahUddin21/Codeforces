#include <bits/stdc++.h>
using namespace std;
// #define endl '\n'
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

    int n; cin>>n;

    int x,y;

    cout<<1<<space<<1<<space<<n<<endl;
    cout.flush();
    cin>>x;

    cout<<2<<space<<1<<space<<n<<endl;
    cout.flush();
    cin>>y;

    int cnt=y-x;


    int left=1,right=n;

    int l=1,r=n;

    while(l<=r){
        
        int mid=(l+r)/2;

        cout<<1<<space<<mid<<space<<right<<endl;
        cout.flush();

        cin>>x;
        cout<<2<<space<<mid<<space<<right<<endl;
        cout.flush();

        cin>>y;

        if(cnt==(y-x)){
            left=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }

    }

    cout<<'!'<<space<<left<<space<<left+cnt-1<<endl;


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
