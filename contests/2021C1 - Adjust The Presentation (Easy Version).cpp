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
#define ll long long int
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


void mine(){
    
    int n,m,q; cin>>n>>m;
    cin>>q;


    map<int,int>mp;

    forl(i,n){
        int x; cin>>x;

        mp[x]=i;
    }

    vector<int>b;

    int pre=0;

    forl(i,m){

        int x; cin>>x;

        if(pre-x==0)continue;

        b.pb(x);
        pre=x;

    }

    m=b.size();

    map<int,bool>c;

    int cnt=0;

    for(int i=0; i<m; i++){

        if(c[b[i]])continue;

        if(cnt==mp[b[i]]){
            cnt++;
            c[b[i]]=1;
        }else {
            cout<<"TIDAK"<<endl;
            return;
        }

    }

    cout<<"YA"<<endl;

    
}


int main(){
    fast;
    ll t = 1; 
    cin>>t;
    // int c=1;
    while (t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}

