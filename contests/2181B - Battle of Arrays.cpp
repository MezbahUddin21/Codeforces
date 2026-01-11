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

    
    ll n,m; cin>>n>>m;

    
    multiset<int>a;
    multiset<int>b;
    
    
    forl(i,n){
        int x; cin>>x;
        a.insert(x);
    }

    
    forl(i,m){
        int x; cin>>x;
        b.insert(x);
    }

    int cnt=0;

    while(!a.empty() and !b.empty()){

        int aback=*a.rbegin();
        int bback=*b.rbegin();

        // cout<<aback<<space<<bback<<endl;

        // if(cnt==4)break;

        if(cnt%2==0){
            if(aback>=bback){
                b.erase(prev(b.end()));
            }else{
                b.erase(prev(b.end()));
                b.insert(bback-aback);
            }
        }else{
            if(bback>=aback){
                a.erase(prev(a.end()));
            }else{
                a.erase(prev(a.end()));
                a.insert(aback-bback);
            }
        }

        if(a.empty()){
            cout<<"Bob"<<endl;
            return;
        }
        if(b.empty()){
            cout<<"Alice"<<endl;
            return;
        }

        cnt++;
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
