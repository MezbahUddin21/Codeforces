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

    int w,h,a,b; cin>>w>>h>>a>>b;

    int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;

    // int x=x1;
    // int y=y1;

    // x1+=a;
    // y1+=b;

    // if(x2>=x and x2<=x1 and y2>=y and y2<=y){
    //     pyes
    //     return;
    // }
 

    if((abs(x1-x2)<a and abs(y1-y2)<b) or (y1==y2 and abs(x1-x2)%a!=0) or (x1==x2 and abs(y1-y2)%b!=0)){
        pno
        return;
    }else if(abs(x1-x2)%a==0 or abs(y1-y2)%b==0){
        pyes
        return;
    }

    pno


    
}





signed main() {
    ios::sync_with_stdio(0),cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;

// int c=1;
    while(t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}


