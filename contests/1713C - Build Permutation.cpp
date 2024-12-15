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


ll mxn=100000+5;

vector<int>ans(mxn);

void puring(int r){ 
    if(r<0)return;
    
    int sqr=sqrt(r+r);

    int l=sqr*sqr-r; puring(l-1);

    while(l<=r){
        ans[l]=r;
        ans[r]=l;
        l++;
        r--;
    }
}




void mine(){
    int n; cin>>n;

    puring(n-1);

    for(int i=0; i<n; i++){
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


