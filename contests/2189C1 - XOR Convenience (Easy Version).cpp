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

    vector<int>ans;
    map<int,int>mp;

    ans.pb(1);
    int start=n;
    int ind=0;
    mp[1]=1;
    while(--start){
        // cout<<start<<space;
        if(start==1)break;
        while(!(start^ans[ind]>n) or mp.count(start^ans[ind])){
            ind++;
        }
        ans.pb(start^ans[ind]);
        mp[start^ans[ind]]=1;
    }

    for1(i,n){
        if(!mp.count(i)){
            ans.pb(i);
            break;
        }
    }

    // cout<<endl;
    reverse(ans.begin(),ans.end());

    for(auto it:ans)cout<<it<<space;

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
