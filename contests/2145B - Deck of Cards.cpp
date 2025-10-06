#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1e9+7
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

    string s; cin>>s;

    if(n==1){
        cout<<'-'<<endl;
        return;
    }


    int l=0,r=n-1;

    vector<char>v(n);

    int two=0;

    forl(i,k){

        if(s[i]=='0'){
            v[l]='-';
            l++;
        }
        if(s[i]=='1'){
            v[r]='-';
            r--;
        }

        if(s[i]=='2')two++;

    }

    if(k==n){
        forl(i,n)cout<<'-';
        cout<<endl;
        return;
    }

    // if(two==k){
    //     forl(i,n)cout<<'?';

    //     cout<<endl;
    //     return;
    // }

    while(two){
        if(l>r)break;
        v[l]='?';
        v[r]='?';
        l++;
        r--;
        two--;
    }


    for(auto it:v){
        if(!it)cout<<'+';
        else cout<<it;
    }
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


