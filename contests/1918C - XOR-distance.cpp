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
    ll a,b,c; cin>>a>>b>>c;

    if(a<b)swap(a,b);

    ll cur=0;

    int start=0;

    for(int i=60; i>=0; i--){
        int x=a>>i&1;
        int y=b>>i&1;

        if(x==y)continue;

        if(x>y){
            if(start==0)start=1;

            else if(cur+ (1LL<<i)<=c ) cur|=1LL<<i;
        }
    }


    cout<<abs((a^cur)-(b^cur))<<endl;
    

}


 
int main() {
    int t;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
