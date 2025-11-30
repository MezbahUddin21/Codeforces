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
    array a with 2n int
    
    f(b) = no of dist elements with an odd number occ in seq b

*/

void mine(){

    int n; cin>>n;

    vector<int>v(n+n);

    map<int,int>mp;

    forl(i,n+n){
        cin>>v[i];
        mp[v[i]]++;
    }


    ll ans=0;

    int cnt=0;
    int odd=0;

    for(auto it:mp){

        int f=it.second;

        // cout<<f<<space;

        if(f%2){
            ans++;
            odd++;
        }

        else{
            if((f/2)%2)ans+=2;
            else cnt++;
        }

    }

    if(odd>0){
        ans+=cnt*2;
    }else{
        if(cnt%2)ans+=(cnt-1)*2;
        else ans+=cnt*2;
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
