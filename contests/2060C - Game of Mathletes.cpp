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


int mine() {
    
    int n,k; cin>>n>>k;

    vector<int>v(n);

    forl(i,n)cin>>v[i];

    map<int,int>mp;

    forl(i,n)mp[v[i]]++;

    int ans=0;

    int mn;

    for(auto it:mp){
        if(k-it.first==it.first){
            ans+=mp[it.first]/2;
        }else if(mp[k-it.first]){
            mn=min(mp[it.first],mp[k-it.first]);
            ans+=mn;
            mp[k-it.first]-=mn;
            mp[it.first]-=mn;
        }
    }


    cout<<ans<<endl;

}

 
int main() {
    fast;
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
