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


*/

vector<ll>l1;
vector<ll>l2;

void mine(){

    ll a,b; cin>>a>>b;
    ll aa=a,bb=b; 

    ll i=0;
    ll cnt1=0;
    while(i<l1.size() and a>=l1[i]){
        a-=l1[i];
        cnt1++;
        i++;
    }

    i=0;
    ll cnt2=0;
    while(i<l2.size() and b>=l2[i]){
        b-=l2[i];
        i++;
        cnt2++;
    } 

    

    ll ans=2*min(cnt1,cnt2)+(((cnt1-cnt2)>=1));


    swap(aa,bb);
    i=0;
    cnt1=0;
    while(i<l1.size() and aa>=l1[i]){
        aa-=l1[i];
        cnt1++;
        i++;
    }

    i=0;
    cnt2=0;
    while(i<l2.size() and bb>=l2[i]){
        bb-=l2[i];
        i++;
        cnt2++;
    } 

    

    ans=max(ans,2*min(cnt1,cnt2)+(((cnt1-cnt2)>=1)));

    cout<<ans<<endl;

}

int main(){
    fast;

    forl(i,30){
        if(i%2==0)l1.pb(1<<i);
        else l2.pb(1<<i);
    }

    ll t = 1;
    cin>>t;
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
