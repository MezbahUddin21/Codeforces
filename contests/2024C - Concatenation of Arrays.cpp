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


bool comp(pair<int,int>a, pair<int,int>b){
    int mxa=max(a.first,a.second);
    int mxb=max(b.first,b.second);
    if(mxa==mxb)return min(a.first,a.second)<min(b.first,b.second);
    return mxa<mxb;
}


void mine(){
    int n; cin>>n;
    vector<pair<int,int>>v(n);
    forl(i,n){
        int x,y; cin>>x>>y;
        v[i].first=x;
        v[i].second=y;
    }

    sort (v.begin(),v.end(),comp);


    forl(i,n){
        cout<<v[i].first<<space<<v[i].second<<space;
    }cout<<endl;
    

}


 
int main() {
    int t;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}



