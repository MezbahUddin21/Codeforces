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


void mine(){
    int n; cin>>n;

    vector<int>v(n+1);

    for1(i,n)v[i]=i;

    if(n%2){
        for(int i=2; i<n; i+=2){
            swap(v[i],v[i+1]);
        }
    }else{
        for(int i=1; i<n; i+=2){
            swap(v[i],v[i+1]);
        }
    }

    for(int i=1; i<=n; i++){
        cout<<v[i]<<space;
    }cout<<endl;
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
