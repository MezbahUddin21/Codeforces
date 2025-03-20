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

    int n,x;

    cin>>n>>x;

    int pnt;

    for(int i=0; i<33; i++){
        if(!((x>>i)&1)){
            pnt=i;
            break;
        }
    }

    int fnd=1<<pnt;

    // cout<<pnt<<space<<fnd<<endl;


    int orr=0;
    int i=0;

    for(; i<n-1; i++){
        orr|=i;
        if(i<fnd and orr<=x)cout<<i<<space;
        else break;
    }

    orr|=i;

    if(orr==x){
        cout<<i<<space;
        i++;
    }

    if(i<n){
        for(;i<n; i++)cout<<x<<space;
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
