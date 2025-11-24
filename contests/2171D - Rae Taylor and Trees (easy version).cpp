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

    // vector<vector<int>>g(n+1);

    forl(i,n)cin>>v[i];

    int mn=v[0];
   
    for(int i=1; i<n; i++){

        int mn1=INT_MAX;

        if(v[i]<mn){

            // cout<<i<<endl;

            for(int j=i; j<n; j++){
                // cout<<j<<endl;

                mn1=min(mn1,v[j]);

                if(v[j]>mn){
                    if(j==n-1){
                        pyes
                        return;
                    }

                    i=j;
                    break;

                }
                if(j==n-1){
                    pno
                    return;
                }

            }

            

        }

        mn=min(mn,mn1);
        // cout<<mn<<endl;

        mn=min(mn,v[i]);

        
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
