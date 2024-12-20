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
#define fast {ios_base::sync_with_stdio(false); cin.tie(0);}



int mexx(set<int>s){
    int mex=0;
    while(s.find(mex)!=s.end()){
        mex++;
    }
    return mex;
}


void mine(){
    int n,x,y; cin>>n>>x>>y;

    vector<int>ans(n,-1);

    vector<set<int>>f(n);

    forl(i,n){
        f[i].insert((i+1)%n);
        f[i].insert((i-1+n)%n);
    }

    x--,y--;
    f[x].insert(y);
    f[y].insert(x);

    forl(i,n){
        set<int>nv;
        for(auto it:f[i]){
            if(ans[it]!=-1){
                nv.insert(ans[it]);
            }
        }
        ans[i]=mexx(nv);
    }



    forl(i,n){
        cout<<ans[i]<<space;
    }cout<<endl;

}



 
int main() {
    fast
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}


