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

    string s=""; 

    while(1){
        if(s.size()==n)break;

        string ss=s+'0';
        cout<<"? "<<ss<<endl;
        bool f; cin>>f;

        if(f){
            s=ss;
            continue;
        }else{
            ss=s+'1';
            cout<<"? "<<ss<<endl;
            cin>>f;
            if(f){s=ss;continue;}
            
        }

        break;

    }

    while(1){
        if(s.size()==n)break;

        string ss='0'+s;
        cout<<"? "<<ss<<endl;
        bool f; cin>>f;

        if(f){
            s=ss;
            continue;
        }else{
            ss='1'+s;
            s=ss;
            continue;
        }
        break;

    }


    cout<<"! "<<s<<endl;



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
