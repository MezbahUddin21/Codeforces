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
ll gcd(ll a, ll b){
    ll g=__gcd(a,b);
    return g;
}




void solve(){
    string s; cin>>s;
    vector<pair<int,char>>cap;
    vector<pair<int,char>>sm;
    int n=s.size();
    int B=0, b=0;
    for(int i=0; i<n; i++){
        if(s[i]=='B'){
            if(!cap.empty()){
                cap.pop_back();
            }
        }
        else if(s[i]=='b'){
            if(!sm.empty()){
                sm.pop_back();
            }
        }
        else if(s[i]>='A' && s[i]<='Z')cap.push_back({i,s[i]});
        else if(s[i]>='a' && s[i]<='z')sm.push_back({i,s[i]});
    }
    vector<pair<int,char>>aa;
    for(auto it:cap){
        aa.push_back(it);
    }
    for(auto it:sm){
        aa.push_back(it);
    }
    sort(aa.begin(),aa.end());
    for(auto it:aa){
        cout<<it.second;
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


 

