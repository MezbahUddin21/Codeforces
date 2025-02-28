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


bool isOk(ll n){
    ll sqN=sqrt(n);

    if(sqN*sqN==n)return true;
    else return false;
}


void mine(){
    ll n; cin>>n;


    if(isOk(n*(n+1)/2)){
        cout<<-1<<endl;
        return;
    }


    set<ll>st;

    for1(i,n)st.insert(i);

    ll total=0;

    while(!st.empty()){

        for(auto it:st){
            if(!isOk(total+it)){
                cout<<it<<space;
                total+=it;
                st.erase(it);
                break;
            }
        }
    }

    cout<<endl;



}


 
int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
