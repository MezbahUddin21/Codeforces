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

    vector<string>v(n);

    forl(i,n)cin>>v[i];

    vector<int>ans(n);

    forl(i,n)ans[i]=i;

    sort(ans.begin(), ans.end(),
    [&](int x, int y) {
        if(v[x][y] == '1') return x < y;
        else return x > y;
    });
    for(auto i : ans)cout<<i+1<<space;

    cout<<endl;

}


 
int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
