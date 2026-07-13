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
 int n,k; cin>>n>>k;
 vector<ll>v(n+1),v2(n+1),vc(n+1),pre(n+1);
 
		for(int i = 1; i <= n; i++)
		{
			cin >> v[i];
			vc[i] = vc[i-1] + v[i];
		}
		
		for(int i = 1; i <= n; i++)
			cin >> v2[i];
		
		for(int i = n; i >= 1; i--)
		{
			if(i == n)
				pre[i] = 1;
			else
				if(v2[i] % v2[i+1] != 0)
					pre[i] = 1;
				else
				{
					pre[i] = pre[i+1] + 1;
				}
		}
		
		int mx = 0;
		
		for(int i = 1; i <= n; i++)
		{
			int st = i;
			int dr = i + pre[i] - 1;
			int ans = 0;
			while(st <= dr)
			{
				int mid = (st + dr) / 2;
				if(vc[mid] - vc[i - 1] <= k)
					ans = mid - i + 1, st = mid + 1;
				else
					dr = mid - 1;
			}
			mx = max(mx, ans);
		}
		cout << mx << '
';
 
 
 
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
 
 
 