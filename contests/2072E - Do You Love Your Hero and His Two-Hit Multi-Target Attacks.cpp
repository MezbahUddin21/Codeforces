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
    
    int k; cin>>k;

    vector<pair<int,int>>ans;

    int cnt1=0, cnt2=0;

    for(int i=500; i>=2; i--){
        int n=(i-1)*(i-1+1)/2;
        while(k>=n){
            k-=n;

            cnt1++;

            for(int j=1; j<=i; j++){
                ans.pb({cnt1,cnt2});
                cnt2++;
            }
        }

    }
    
    cout<<ans.size()<<endl;
    
    for(auto it:ans)cout<<it.first<<space<<it.second<<endl;

}


int main() {
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

