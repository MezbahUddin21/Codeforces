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


    if(n==k){
        for1(i,n)cout<<i<<space;
        cout<<endl;
        return;
    }

    int even=((n+k-1)/k);

    vector<vector<int>>ans(even+1);

    int cnt=1;

    int odd=1;

    bool f=0;

    int c=1;

    // cout<<"even "<<even<<endl;



    while(1){

        c++;

        if(!f){
            for(int i=odd; i<=even; i++){

                if(i==even and (n%k<=ans[i].size() and n%k!=0))continue;
                else{
                    ans[i].pb(cnt);
                    cnt++;

                    if(cnt>n)break;
                }

            }

            f=1;
        }

        if(cnt>n)break;


        else if(f){
            for(int i=even; i>=odd; i--){

                if(i==even and (n%k<=ans[i].size() and n%k!=0))continue;
                else{
                    ans[i].pb(cnt);
                    cnt++;

                    if(cnt>n)break;

                }

            }

            f=0;

        }

        if(cnt>n)break;


        if(c==2*k)break;

    }
    
    c=0;
    
    for1(i,ans.size()-1){
        for(auto it:ans[i])cout<<it<<space,c++;
    }


    cout<<endl;

    // cout<<c<<endl;


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
