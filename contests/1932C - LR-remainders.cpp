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
    int n,m; cin>>n>>m;
    deque<int>a;
    vector<int>v;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        a.push_back(x);
    }
    string s; cin>>s;
    for(int i=0; i<n; i++){
        if(s[i]=='L'){
            v.push_back(a.front());
            a.pop_front();
        }
        else{
            v.push_back(a.back());
            a.pop_back();
        }
    }
    reverse(v.begin(),v.end());

    ll mul=1;
    vector<int>ans;
    for(auto i:v){
        mul*=i;
        mul%=m;
        ans.push_back(mul);
    }
        reverse(ans.begin(),ans.end());
    for(auto i:ans)cout<<i<<" ";
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


 



