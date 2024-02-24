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



int cel(int a,float l){
    return ceil(a/l);
}



void solve() {
    long long n;
    string s;
    cin>>n>>s;
    vector<int> pre(n,0),suf(n,0);
    set<char> ss;
    for(int i=0;i<n;i++){
        ss.insert(s[i]);
        pre[i]=ss.size();
    }
    ss.clear();
    for(int i=n-1;i>=0;i--){
        ss.insert(s[i]);
        suf[i]=ss.size();
    }
    int ans=0,maxx=0;
    for(int i=0;i<n-1;i++){
        ans=pre[i]+suf[i+1];
        maxx=max(maxx,ans);
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


 



