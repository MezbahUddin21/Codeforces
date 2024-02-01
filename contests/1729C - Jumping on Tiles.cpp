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
    string s; cin>>s;
    int n=s.size();
    vector<vector<int>>v(26);
    for(int i=0; i<n; i++){
        v[s[i]-'a'].push_back(i+1);
    }
    vector<int>result;
    if(s[0]<=s[n-1]){
        for(int i=s[0]-'a'; i<=s[n-1]-'a'; i++){
            for(auto it:v[i]){
                result.push_back(it);
            }
        }
    }else{
        for(int i=s[0]-'a'; i>=s[n-1]-'a'; i--){
            for(auto it:v[i]){
                result.push_back(it);
            }
        }
    }

    cout<<abs(s[0]-s[n-1])<<" "<<result.size()<<endl;
    for(auto it:result){
        cout<<it<<" ";
    }cout<<endl;
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


 



