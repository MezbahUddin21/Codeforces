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
 int n;
 cin>>n;
 vector<pair<ll,int>>v(n);
 vector<ll>pre(n+1);
 for(int i=0; i<n; i++){
    cin>>v[i].first;
    v[i].second=i;
 }
 sort(v.begin(),v.end());

 pre[0]=0;
 for(int i=0; i<n; i++){
    pre[i+1]=v[i].first + pre[i];
 }

 vector<int>ans(n);
    int m=n-1;
 for(int i=n-1; i>=0; i--){
    ans[v[i].second]=m;
    if(v[i].first>pre[i])m=i-1;
 }

 for(int i=0; i<n; i++){
    cout<<ans[i]<<" ";
 }
 cout<<endl;


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


 
