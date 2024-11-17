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


// void printt(vector<int> v){
//     cout<<v.size()<<endl;
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;
// }

vector<ll>pre(200005,0);


void mine(){

    int n; cin>>n;

    cout<<pre[n]<<endl;

}



 
signed main() {



    for(int i=1; i<=pre.size(); i++){
        int l=i;
        pre[i]+=pre[i-1];

        while(l){
            pre[i]+=l%10;
            l/=10;
        }
    }

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


