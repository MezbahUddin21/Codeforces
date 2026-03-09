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
 
    m+k

    1. if k==0 return x

    2. i and insert  

*/

void mine(){

    int n; cin>>n;

    vector<int>v(n);

    forl(i,n)cin>>v[i];

    map<int,int>mp;

    int cnt=0;

    forl(i,n){

        if(i>0){

            if(v[i]>v[i-1]+1){

                mp.clear();
            }

        }

        if(mp.count(v[i]-1)){
            mp[v[i]]=1;
        }else {
            cnt++;
            mp[v[i]]=1;
        }

    }


    cout<<cnt<<endl;




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
