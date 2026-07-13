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
	int n; cin>>n;
    char c; cin>>c;
    string s; cin>>s;
    int g=0,y=0;
    bool f=false;
    int cnt=0,maxx=0;
    for(int i=0; i<n; i++){
        if(s[i]=='g' && g==0){
            g=i+1;
        }
        if(c=='g'){
            cout<<0<<endl;
            return;
        }
        if(s[i]==c && f==false){
             f=true;
             y=i+1;
        }else if(s[i]=='g'){
            cnt++;
            f=false;
            maxx=max(maxx,cnt);
            cnt=0;
        }else if(f==true){
            cnt++;
        }
 
    }
    if(f==true){
        maxx=max(maxx,(n-y+g));
    }
 
    cout<<maxx<<endl;
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
 
 
 
 