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

#define f first
#define s second
void mine(){
    

    vector<pair<int,int>>v(3);

    forl(i,3){
        cin>>v[i].first;
        cin>>v[i].second;
    }


    

    sort allr(v);

    // forl(i,3){
    //     cout<<v[i].f<<space<<v[i].s<<endl;;
    // }cout<<endl;

    if(v[0].f==v[1].f and v[0].f==v[2].f and v[0].s+v[1].s+v[2].s==v[0].f){
        pyes
        return;

    }
    if(v[0].f==v[1].f+v[2].f and v[1].s==v[2].s and v[0].s+v[1].s==v[0].f ){
        pyes
        return;
    }

    if(v[0].s==v[1].s and v[0].s==v[2].s and v[0].f+v[1].f+v[2].f==v[0].s){
        pyes
        return;

    }
    if(v[0].s==v[1].s+v[2].s and v[1].f==v[2].f and v[0].f+v[1].f==v[0].s ){
        pyes
        return;
    }

    pno

   
}
 
int main() {
    fast;
    int t = 1; 
    cin>>t;
    // int c=1;
    while (t--) {

        // cout<<"Case "<<c<<":"<<endl; c++;
        mine();
    }
    return 0;
}
