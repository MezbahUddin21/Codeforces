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
    array a of len n
    int k

    f(l,r)= the value of mex (al to ar)

        total n-k+1 op,

        select a window of size k, mex is maximum

        then, you select an int l<= i <=r
                delete ai 



*/

void mine(){

    
    int n,k; cin>>n>>k;

    set<int>st;

    forl(i,n){
        int x; cin>>x;

        st.insert(x);
    }



    int i=0;
    int cnt=0;

    for(auto it:st){
        if(cnt==k-1)break;
        if(i!=it){
            cout<<i<<endl;
            return;
        }
        i++;
        cnt++;
    }

    cout<<i<<endl;


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
