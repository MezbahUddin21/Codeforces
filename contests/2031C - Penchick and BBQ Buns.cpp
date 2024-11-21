#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"Yes"<<"\n";
#define pno cout<<"No"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)

bool sorta(const pair<ll, ll>& a, const pair<ll, ll>& b) { return (a.second < b.second); }
bool sortd(const pair<ll, ll>& a, const pair<ll, ll>& b) { return (a.second > b.second); }


vector<int>v={1,2,2,3,3,4,4,5,5,1,6,6,7,7,8,8,9,9,10,10,11,11,13,12,12,1,13};

void mine(){
    int n; cin>>n;

    if(n%2==0){
        for(int i=1; i<=n/2; i++){
            cout<<i<<space<<i<<space;
        }
        cout<<endl;
    }else if(n<27)cout<<-1<<endl;
    else{
        int j=14;
        for(int i=1; i<=n-27; i+=2){
            cout<<j<<space<<j<<space;
            j++;
        }
        for(auto i:v)cout<<i<<space;
        cout<<endl;
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

