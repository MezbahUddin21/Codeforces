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




void mine(){
    int n; cin>>n;
    vector<ll>v(n+1,0);

    for1(i,n)cin>>v[i];

    if(n%2==1){
        ll ma=0x3f3f3f3f3f3f3f3f;
        for(int i=1; i<=n; i+=2){
            ll tmp=1;
            for(int j=1; j<i; j+=2){
                tmp=max(tmp,v[j+1]-v[j]);
            }

            for(int j=i+1; j<=n; j+=2){
                tmp=max(tmp,v[j+1]-v[j]);
            }
            ma=min(ma,tmp);
        }

        cout<<ma<<endl;
    }else{
        ll ma=1;
        for(int i=1; i<=n; i+=2){
            ma=max(ma,v[i+1]-v[i]);
        }

        cout<<ma<<endl;
    }

}




 
signed main() {
    ios::sync_with_stdio(0),cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;

//    int c=1;
    while(t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}

