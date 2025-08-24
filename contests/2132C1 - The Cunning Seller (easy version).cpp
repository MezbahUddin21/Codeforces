#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 998244353
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
after selling 3w instead of 1w

to increase profit-- bought more
     now, 



*/


vector<ll>pOf3;

 
void mine(){
    
    ll n; cin>>n;

    ll cost=0;

    while(n){
        
        int it=lower_bound(pOf3.begin(),pOf3.end(),n)-pOf3.begin();

        // cout<<it<<endl;

        if(n==pOf3[it]){
            cost+=pow(3,it+1)+it*pow(3,it-1);
            n=0;

        }else{
            it--;
            cost+=pow(3,it+1)+it*pow(3,it-1);
            n-=pOf3[it];
        }


    }

    cout<<cost<<endl;


}
 
int main() {
    fast;

    forl(i,19){
        pOf3.pb(pow(3,i));
        // cout<<pOf3.back()<<space;
    }

    ll t = 1; 
    cin>>t;
    ll c=1;
    while (t--) {

        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
