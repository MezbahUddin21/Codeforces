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


    forl(i,n){
        cin>>a[i];
    }

    forl(i,n){
        cin>>b[i];
    }

    ll ans=0;

    forl(i,n){
        if(a[i]>b[i])ans+=a[i]-b[i];
    }

    cout<<ans+1<<endl;

}



int main() {
    fast;
    ll t = 1; 
    cin>>t;
    // cin.ignore();
    // ll c=1;
    while (t--) {    
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}



