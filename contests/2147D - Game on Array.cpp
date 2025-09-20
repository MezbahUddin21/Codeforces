#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1e9+7
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"yes"<<"\n";
#define pno cout<<"no"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

/*


*/

void mine(){

    ll n; cin>>n;

    vector<ll>v(n);

    
    map<ll,ll>mp;

    forl(i,n){
        cin>>v[i];
        mp[v[i]]++;
    }


    vector<pair<ll,ll>>get;

    for(auto it:mp){
        get.pb(make_pair(it.second,it.first));
    }

    sort allr(get);

    // for(auto it:get){
    //     cout<<it.first<<space<<it.second<<endl;
    // }


    ll a=0,b=0;

    // cout<<a<<space<<b<<endl;

    n=get.size();

    bool f=0;

    forl(i,n){

        if(get[i].second%2){

            a+=get[i].first*(get[i].second/2+1);
            b+=get[i].first*(get[i].second/2);
            f=1;
            get[i].second=0;
            break;
        }

    }

    forl(i,n){

        if(get[i].second%2==0 ){

            a+=get[i].first*(get[i].second/2);
            b+=get[i].first*(get[i].second/2);

        }else if(f==0){

            a+=get[i].first*(get[i].second/2+1);
            b+=get[i].first*(get[i].second/2);
            f=1;

        }else if(f==1){

            a+=get[i].first*(get[i].second/2);
            b+=get[i].first*(get[i].second/2+1);
            f=0; 
        }

    }


    cout<<a<<space<<b<<endl;





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
