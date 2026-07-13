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
	int m; cin>>m;
    map<int,int>mp;
    for(int i=1; i<=m; i++){
        int n; cin>>n;
        int x;
        for(int j=0; j<n; j++){
            cin>>x;
            mp[x]=i;
        }
    }
      vector<int> v(m+1,-1);
      for(auto [i,last]:mp){
         if(v[last]==-1){
            v[last]=i;
         }
      }
    int ok=1;
    for(int i=1; i<=m; i++){
        if(v[i]==-1)ok=0;
    }
    if(ok==0){
        cout<<-1<<endl;
    }else{
        for(int i=1; i<=m; i++){
            cout<<v[i]<<" ";
        }cout<<endl;
    }
    
	
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
 
 
 
 