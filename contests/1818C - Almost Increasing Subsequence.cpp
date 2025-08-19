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

    int n,q; cin>>n>>q;

    vector<int>v(n);

    forl(i,n)cin>>v[i];

    vector<int>pre(n);


    for(int i=1; i<n-1; i++){
        if(v[i]<=v[i-1] and v[i+1]<=v[i])pre[i]=pre[i-1]+1;
        else pre[i]=pre[i-1];
    }

    while(q--){
        int l,r; cin>>l>>r;
        l--,r--;

        if(l==r)cout<<r-l+1<<endl;
        else cout<<r-l+1-pre[r-1]+pre[l]<<endl;

    }


}

int main(){
    int t=1; 
    // cin>>t;
    
    // int c=1;
    
    while(t--){
        
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }

    return 0;
}
