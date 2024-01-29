#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define setprecision(x) cout << fixed << setprecision(x)
void mezbah(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}


void seive(int n){
    vector<int>v(n+3);
    for(int i=2; i*i<=n; i++){
        if(v[i]==0){
            for(int j=i*i; j<=n; j+=i){
                v[j]=1;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(v[i]==0)cout<<i<<" ";
    }
    cout<<endl;
}

vector<ll> mPrimeFact(ll x) {
	vector<ll> fact;
	for(ll i = 2; i * i <= x; i++) {
		ll cnt = 0; 
		while(x % i == 0) {
			cnt++;
			x /= i;
			fact.push_back(i);
		}
	}
	if(x > 1) fact.push_back(x);
	return fact;
}

ll lcm(ll a,ll b){
    ll g=__gcd(a,b);
    return (a*b/g);
}

void solve(){
    int n,k,x; cin>>n>>k>>x;
    vector<int>v(n+1);
    for(int i=1; i<n+1; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    
    vector<int>pre(n+1,0);
    pre[1]=v[1];
    for(int i=2; i<n+1; i++){
        pre[i]=pre[i-1]+v[i];
    }
    constexpr int INF = 2e9;
    int ans=-INF;
    for(int i=n; i>=0; i--){
        int f=n-i;
        int p=min(i,x);
        if(f>k)break;
        ans=max(ans, pre[i-p]-(pre[i]-pre[i-p]));
    }
    cout<<ans<<endl;

   


}
 
int main() {
    mezbah();
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}


 



