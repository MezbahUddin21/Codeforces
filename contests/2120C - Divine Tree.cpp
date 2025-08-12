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
    
    ll n,m; cin>>n>>m;

    ll sum=n*(n+1)/2;

    // cout<<sum<<endl;

    if(m<n or m>sum){
        cout<<-1<<endl;
        return;
    }

    if(n==1 and m==1){
        cout<<1<<endl;
        return;
    }

    m-=n;
    vector<ll>ans;

    vector<bool>check(n+1);

    for(ll i=n-1; i>=0; i--){
        // cout<<m<<endl;
        if(m>=i){
            ans.pb(i+1);
            check[i+1]=1;
            m-=i;
        }

        if(m==0)break;
    }

    if(ans.size()>0)cout<<ans[0]<<endl;
    else cout<<1<<endl;

    for(ll i=0; i<ans.size(); i++){

        if(i==ans.size()-1)cout<<ans[i]<<space<<1<<endl;
        else cout<<ans[i]<<space<<ans[i+1]<<endl;
    }

    ll i=1;
    ll prev;
    for(;i<=n; i++){
        if(!check[i] and i!=1){
            cout<<1<<space<<i<<endl;
            prev=i;
            break;
        }
    }
    i++;
    for(;i<=n; i++){
        if(!check[i] and i!=1){
            cout<<prev<<space<<i<<endl;
            prev=i;
        }
    }



    


    

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
