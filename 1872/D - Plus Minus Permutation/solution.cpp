#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "
"
#define sp " "
// #define setprecision(x) cout << fixed << setprecision(x)
 
#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void maruf(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
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
 
void solve(){
    ll n,a,b;  cin>>n>>a>>b;
    ll x=n/a, y=n/b;
    ll lcm=(a*b)/__gcd(a,b);
    ll cc=n/lcm;
    x-=cc;
    y-=cc;
    ll sum=n*(n+1)/2;
    cout<<(sum-((n-x)*((n-x)+1)/2)-(y*(y+1)/2))<<endl;
 
    
}
 
int main() {
    maruf();
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}