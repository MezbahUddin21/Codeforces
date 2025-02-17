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
    int x,y; cin>>x>>y;

    if(y>x and y-x==1){
        pyes
        return;
    }

    while(x>y){
        x-=9;
        x+=1;
        if(x==y){
            pyes
            return;
        }
        x-=1;
    }

    pno



}

int main()
{
    int t=1; 
    cin>>t;
    
    while(t--){
        mine();
    }

    return 0;
}
