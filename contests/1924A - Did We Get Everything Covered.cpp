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

    n and k , s
    all possible strings of len n
    form using k lowercase 


*/

void mine(){

    int n,k,m; cin>>n>>k>>m;

    string s; cin>>s;

    vector<bool>check(k,0);
    string str;
    int cnt=0;

    for(auto c:s){
        if(str.size()==n)break;

        if(!check[c-'a'])cnt++;
        check[c-'a']=1;

        if(cnt==k){
            str+=c;
            
            for(int i=0; i<k; i++)check[i]=0;
            cnt=0;
        }
    }

    if(str.size()==n){
        pyes
        return;
    }

    char ch='a';

    for(int i=0; i<k; i++){
        if(!check[i])while(str.size()<n)str+=('a'+i);
    }

    pno
    cout<<str<<endl;


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
