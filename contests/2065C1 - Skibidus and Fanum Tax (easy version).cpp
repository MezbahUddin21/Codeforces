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
    int n,m; cin>>n>>m;

    vector<int>a(n+1,-1000000000);

    for1(i,n)cin>>a[i];

    int tg; cin>>tg;

    for1(i,n){
        int x=a[i];
        int y=tg-a[i];

        if(x>y)swap(x,y);

        if(a[i-1]<=x)a[i]=x;
        else if(a[i-1]<=y)a[i]=y;

        else {
            pno
            return;
        }
    }

    pyes



}


int main(){


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t=1; 
    cin>>t;
    
    while(t--){
        mine();
    }

    return 0;
}
