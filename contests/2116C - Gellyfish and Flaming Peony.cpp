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
    now as i eventually found the gcd,
        i need to find a way to acheive a value==gcd

*/

void mine(){

    int n; cin>>n;

    vector<int>v(n+1);

    queue<int>q;
    int g;
    for1(i,n){
        cin>>v[i];
        if(i==0)g=v[i];
        else g=__gcd(g,v[i]);
        q.push(v[i]);
        
    }

    sort all(v);

    int cnt=0;
    for1(i,n)cnt+=(g==v[i]);

    if(cnt){
        cout<<n-cnt<<endl;
        return;
    }

    vector<int>dp(5010,INT_MAX);
    for1(i,n)dp[v[i]]=0;


    while(!q.empty()){

        int cur=q.front(); q.pop();

        for1(i,n){
            int g=__gcd(cur,v[i]);
            if(dp[g]==INT_MAX){
                dp[g]=dp[cur]+1;
                q.push(g);
            }
            else{
                dp[g]=min(dp[g],dp[cur]+1);
            }

        }
    }
    
    cout<<n+dp[g]-1<<endl;

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
