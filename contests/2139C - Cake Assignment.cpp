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

    the mamnager gave them a total of 2^k+1 cakes

    the cakes were distributed evenly os each of them initally recieve 2^k cakes

    Chocola gets  venilla gets
        x               2^k+1 -x


        now the operations,

        1. if(Ch%2==0) Ch gave half of her cakes to Va
        2. if(Va%2==0) Va game half of her cakes to Ch



*/

void mine(){

    ll k, x; cin>>k>>x;

    vector<ll>bits;

    ll tempx=x;


    ll d=0;

    while(x>0){
        if(x%2)bits.pb(1);
        x=x>>1;
    }

    ll each=pow(2,k);

    // cout<<"a"<<each<<endl;

    if(tempx==each){
        cout<<0<<endl;
        return;
    }

    ll ch=tempx, va=each+each -tempx;

    // cout<<ch<<space<<va<<endl;

    vector<ll>ans;

    if(ch<va){
        while((va-ch)!=0){
            if(ch<va){
                va-=ch;
                ch*=2;
                ans.pb(1);
            }else{
                ch-=va;
                va*=2;
                ans.pb(2);
            }
        }
    }else{
        while((ch-va)!=0){
            if(ch<va){
                va-=ch;
                ch*=2;
                ans.pb(1);
            }else{
                ch-=va;
                va*=2;
                ans.pb(2);
            }
        }
    }


    cout<<ans.size()<<endl;
    reverse(ans.begin(),ans.end());
    for(auto it:ans)cout<<it<<space;

    cout<<endl;


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
