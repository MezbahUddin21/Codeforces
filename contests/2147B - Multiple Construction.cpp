#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1e9+7
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"yes"<<"\n";
#define pno cout<<"no"<<"\n";
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

    vector<int>ans(2*n+1,0);

    int pos=1;
    for(int i=n; i>=1; i--){

        

        for(int j=pos; j<=n; j++){
            if(ans[j]){
                pos=j;
            }else{
                pos=j;
                break;
            }
        }

        ans[pos]=i;

        int next=i+pos;

        while(next<=2*n){
            if(ans[next])next+=i;
            else break;
        }

        ans[next]=i;
    }

    for1(i,2*n)cout<<ans[i]<<space;

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
