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


void mine(){
    
    int n,a,b; cin>>n>>a>>b;

    if(a+b+2>n or abs(a-b)>1){
        cout<<-1<<endl;
        return;
    }

    vector<int>ans(n+1);


    for1(i,n){
        ans[i]=i;
    }


    if(a==b){
        
        for1(i,a){
            swap(ans[i*2],ans[i*2+1]);
        }

    }else if(a<b){

        for1(i,b){
            swap(ans[i*2],ans[i*2-1]);
        }

    }else{
        for1(i,a){
            swap(ans[n-2*i+1],ans[n-2*i+2]);
        }
    }


    for1(i,n)cout<<ans[i]<<space;

    cout<<endl;
    
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


