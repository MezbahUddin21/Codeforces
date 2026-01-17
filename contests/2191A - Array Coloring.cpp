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

    
    int n; cin>>n;

    vector<int>v(n);

    vector<vector<int>>v1(n, vector<int>(2));
    // vector<vector<int>>v2(n, vector<int>(2));


    forl(i,n){
        int x; cin>>x;

        v1[i][0]=x;
        v1[i][1]=(i%2)?1:0;

    }

    sort all(v1);

    forl(i,n-1){
        if(v1[i][1]==v1[i+1][1]){
            pno
            return;
        }
    }

    pyes




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
