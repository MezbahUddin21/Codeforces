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

    ll n,k; cin>>n>>k;

    vector<string>v(k);

    forl(i,k)cin>>v[i];

    vector<vector<bool>>store(n,vector<bool>(26,0));

    forl(i,n){
        forl(j,k){
            store[i][v[j][i]-'a']=1;
        }
    }

    string ans=v[0];

    auto check=[&](ll m){

        bool f=1;
        string temp=ans;

        for(ll i=0; i<m; i++){
            bool f1=0;
            for(char j='a'; j<='z'; j++){
                bool no=1;
                for(ll k=i; k<n; k+=m){

                    if(!store[k][j-'a']){
                        no=0;
                        break;
                    }

                }

                // cout<<no<<endl;

                if(no){
                    for(ll k=i; k<n; k+=m){
                        temp[k]=j;
                    }
                    f1=1;
                    break;
                }
            }
            if(f1==0) {
                f=0;
                break;
            }

        }

        if(!f)return false;

        ans=temp;
        return true;
    };



    set<ll>div;
    for(ll i=1; i<=sqrt(n); i++){
        if(n%i==0){
            div.insert(i);
            div.insert(n/i);
        }
    }

    for(auto i:div){

        if(check(i)){
            cout<<ans<<endl;
            return;
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
