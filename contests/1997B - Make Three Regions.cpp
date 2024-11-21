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
    vector<string>v(3);

    cin>>v[1];
    cin>>v[2];
    v[1]="#"+v[1]+"#";
    v[2]="#"+v[2]+"#";


    int cnt=0;

    for(int i=1; i<=n; i++){
        if(v[1][i]=='.' and v[1][i]==v[1][i-1] and v[1][i]==v[1][i+1] and v[1][i]==v[2][i] and v[2][i-1]=='x' and v[2][i+1]=='x')cnt++;
    }

    for(int i=1; i<=n; i++){
        if(v[2][i]=='.' and v[2][i]==v[2][i-1] and v[2][i]==v[2][i+1] and v[2][i]==v[1][i] and v[1][i-1]=='x' and v[1][i+1]=='x')cnt++;
    }

    // for(int i=1)

    cout<<cnt<<endl;

    

}


 
int main() {
    int t;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
