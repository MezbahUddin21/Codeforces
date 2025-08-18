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

    vector<int>parent(n+3);

    auto f=[&](int i, int node, auto &&self) -> void{
        cout<<"? "<<i<<" "<<node<<endl;

        int x; cin>>x;

        if(x==i)parent[node]=i;

        else self(x,node,self);

    };


    for(int i=2; i<=n; i++){
        f(1,i,f);
    }

    cout<<"!"<<space;
    for(int i=2; i<=n; i++){
        cout<<i<<space<<parent[i]<<space;
    }
    cout<<endl;
}

int main(){
    int t=1; 
    cin>>t;
    
    // int c=1;
    
    while(t--){
        
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }

    return 0;
}
