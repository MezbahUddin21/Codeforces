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
    
    int n,m; cin>>n>>m;

    vector<int>a(n);
    vector<int>ca(n);

    vector<int>b(m);

    forl(i,n){
        cin>>a[i];
    }

    forl(i,m)cin>>b[i];

    sort all(b);

    int pre=INT_MIN;

    int mx=INT_MIN;

    for(int i=0; i<n; i++){
        
        auto found=lower_bound(b.begin(), b.end(), a[i]+pre);

        if(found!=b.end()){
            if(a[i]<pre){
                a[i]=*found-a[i];
            }else{
                a[i]=min(a[i],*found-a[i]);
            }

        }

        if(a[i]<pre){
            pno
            return;
        }
        pre=a[i];


    }

    pyes

    
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

