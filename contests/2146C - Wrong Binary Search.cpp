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

    given a binary string s

    for p of len n & x we define,
        find x

        x is stable if and only if 


*/

void mine(){

    
    int n; cin>>n;

    string s; cin>>s;

    vector<int>ans(n+1);

    for1(i,n)ans[i]=i;


    int l=-1,r=-1;

    
    for1(i,n){
        
        if(s[i-1]=='0' and l==-1)l=i,r=i;
        else if(s[i-1]=='0')r++;
        else if(l!=-1){
            if(r-l<=0){
                pno
                return;
            }

            reverse(ans.begin()+l,ans.begin()+r+1);
            l=-1;
            r=-1;
        }


    }

    if(l!=-1){
        if(r-l<=0){
            pno
            return;
        }

        reverse(ans.begin()+l,ans.begin()+r+1);
        l=-1;
        r=-1;

    }

    

    pyes

    for1(i,n)cout<<ans[i]<<space;

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
