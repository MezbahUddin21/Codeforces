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

/*
    if x==y ans=-1

    else
        if((x+k)&(y+k)==0)
            then, (x+k)+(y+k)==(x+k)^(y+k) 

        15= 1111
        10= 1010

        add 1 to 15 and 10,
            10000
            01011

*/

void mine(){

    int x,y; cin>>x>>y;

    if(x==y){
        cout<<-1<<endl;
        return;
    }

    ll mx=max(x,y);

    ll bit=1;

    forl(i,60){
        if((bit<<i) >= mx){
            bit<<=i;
            cout<<bit-mx<<endl;
            return;
        }
    }






}

int main() {
    fast;
    ll t = 1;
    cin>>t;
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
