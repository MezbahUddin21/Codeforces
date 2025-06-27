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

    int n; cin>>n;

    vector<int>a(n);
    vector<int>b(n);

    forl(i,n)cin>>a[i];
    forl(i,n)cin>>b[i];

    set<int>st;


    for(int i=n-1; i>=0; i--){
        if((i<n-1 and (a[i]==a[i+1] or b[i]==b[i+1])) or a[i]==b[i] or st.count(a[i]) or st.count(b[i])){
            cout<<i+1<<endl;
            return;
        }

        if(i<n-1){  
            st.insert(a[i+1]);
            st.insert(b[i+1]);
        }
    }

    cout<<0<<endl;
    

  
}
 
int main() {
    fast;
    int t = 1; cin>>t;
    // int c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
