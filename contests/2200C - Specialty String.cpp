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

    string s; cin>>s;

    if(n%2){
        pno
        return;
    }


    for(int i=0; i<n; i++){

        char prev='1';
        int ind=-1;
        for(int j=0; j<n; j++){

            if(s[j]=='*')continue;

            if(prev=='1'){
                prev=s[j];
                ind=j;
                continue;
            }

            

            if(s[j]==prev){
                s[ind]='*';
                s[j]='*';
                prev='1';
                ind=-1;
            }else {
                prev=s[j];
                ind=j;
            }

        }

    // cout<<s<<endl;

    }


    forl(i,n){
        if(s[i]!='*'){
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
