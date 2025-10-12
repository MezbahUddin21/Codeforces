#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1e9+7
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

vector<int>check;

void dTb(ll n) {
    if (n==0){
        check.push_back(0);
        return;
    }

    while(n>0){
        check.push_back(n%2);
        n/=2;
    }

    reverse(check.begin(),check.end()); 
    
}

void mine(){

    check.clear();

    ll n; cin>>n;

    // for1(i,32){

    //     if(n>= (1<<i))continue;

    //     bool ok=true;

    //     forl(j,i){
    //         int bi=(n>>j)&1;
    //         int bj=(n>>(i-j-1)&1);

    //         if(bi!=bj){
    //             ok=false;
    //             break;
    //         }
    //     }

    //     if(ok){
    //         if(i%2==0){
    //             pyes
    //             return;
    //         }

    //     }

    // }

    dTb(n);

    int cnt=0;

    forl(i,check.size()){
        // cout<<check[i];
        cnt+=(check[i]==1);
    }
    // cout<<endl;

    if(cnt%2){
        pno
        return;
    }




    int l=0,r=check.size()-1;

    while(check[r]==0)r--;


    while(l<r){
        if(check[l]!=check[r]){
            pno
            return;
        }
        l++,r--;
    }

    pyes



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
