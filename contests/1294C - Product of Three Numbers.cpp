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
    ll n; cin>>n;

    set<int>st;

    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            st.insert(i);
            n/=i;
        }

        if(st.size()>1)break;
    }

    st.insert(n);

    if(st.size()<3)pno
    else {
        pyes

        for(auto it:st)cout<<it<<space;
        cout<<endl;
    }


}


 
int main() {
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
