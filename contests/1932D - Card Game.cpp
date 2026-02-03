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

    char ch; cin>>ch;

    map<char,set<string>>mp;

    forl(i,2*n){
        string s; cin>>s;

        mp[s[1]].insert(s);
    }

    vector<string>ans;

    for(auto &[x,y]:mp){

        // cout<<x<<endl;

        if(x==ch)continue;

        while(y.size()>=2){
            ans.pb(*y.begin());
            y.erase(y.begin());
            ans.pb(*y.begin());
            y.erase(y.begin());
        }
    }

    for(auto &[x,y]:mp){
        if(x==ch)continue;

        if(y.size()==1){

            if(mp[ch].size()>=1){
                ans.pb(*y.begin());
                ans.pb(*mp[ch].begin());
                mp[ch].erase(mp[ch].begin());
            }
        }
    }

    while(mp[ch].size()>=2){
            ans.pb(*mp[ch].begin());
            mp[ch].erase(mp[ch].begin());
            ans.pb(*mp[ch].begin());
            mp[ch].erase(mp[ch].begin());
    }


    // cout<<ans.size()<<endl;

    if(ans.size()!=2*n){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        forl(i,ans.size()){
            if(i%2==0){
                cout<<ans[i]<<space<<ans[i+1]<<endl;
            }
        }
    }




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
