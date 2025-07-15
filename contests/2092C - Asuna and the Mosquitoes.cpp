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
#define ll long long int
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


void mine(){
    
    int n; cin>>n;

    vector<int>v(n);

    forl(i,n)cin>>v[i];

    sort all(v);


    ll sum=accumulate(v.begin(), v.end(),0LL);

    int odd=0;
    int even=0;

    forl(i,n){
        if(v[i]%2)odd++;
        else even++;
    }

    if(odd==0 or even==0){
        cout<<v[n-1]<<endl;
        return;
    }

    cout<<sum-odd+1<<endl;
    
}


int main(){
    fast;
    ll t = 1; 
    cin>>t;
    // int c=1;
    while (t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}

