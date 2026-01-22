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

    int n,m,k; cin>>n>>m>>k;

    vector<int>a(n);

    forl(i,n)cin>>a[i];

    vector<int>b(m);

    forl(i,m)cin>>b[i];

    sort all(b);


    string s; cin>>s;

    int delta=0,ptr=0;

    map<int,int>treck;

    forl(i,k){
        if(s[i]=='L')delta--;
        else delta++;

        if(!treck.count(delta)){
            treck[delta]=ptr;
        }
        ptr++;
    }

    // for(auto it:treck){
    //     cout<<it.first<<space<<it.second<<endl;
    // }

    vector<int>res(k+1);

    forl(i,n){
        int it=lower_bound(b.begin(),b.end(),a[i])-b.begin();

        int now=k;
        if(it<b.size()){
            if(treck.count(b[it] - a[i]))
                now = min(now, treck[b[it] - a[i]]);
        }
        if(it>0){
            if(treck.count(b[it-1] - a[i]))
                now = min(now, treck[b[it-1] - a[i]]);
        }

        res[now]--;

    }

    ll ans=n;

    forl(i,k){
        ans+=res[i];
        cout<<ans<<space;
    }
    cout<<endl;

    
}

int main() {
    fast;
    ll t = 1;
    cin>>t;
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "<<endl; c++;
        mine();
    }
    return 0;
}

    // int n,m,k; cin>>n>>m>>k;

    // vector<int>a(n); 
    // forl(i,n){
    //     cin>>a[i];
    // }

    // vector<int>b(m); 
    // forl(i,m){
    //     cin>>b[i];
    // }

    // string s; cin>>s;

    
