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
    int n,m; cin>>n>>m;

    vector<pair<ll,vector<int>>>v(n);


    forl(i,n){
        ll sum=0;
        forl(j,m){
            int x; cin>>x;

            v[i].second.pb(x);

            sum+=x;
        }

        v[i].first=sum;
    }


    sort allr(v);


    vector<int>a;

    forl(i,n){
        forl(j,m){
            a.pb(v[i].second[j]);
        }
    }

    ll ans=0,sum=0;

    forl(i,a.size()){
        sum+=a[i];
        ans+=sum;
    }


    cout<<ans<<endl;



}


int main(){


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t=1; 
    cin>>t;
    
    while(t--){
        mine();
    }

    return 0;
}
