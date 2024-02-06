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
    ll n,m,k; cin>>n>>m>>k;
    set<ll>vn;
    set<ll>vm;
    set<ll>l;
    ll x=0;
    for(ll i=0; i<n; i++){
        cin>>x;
        if(x<=k){l.insert(x);vn.insert(x);}
    }
    for(ll i=0; i<m; i++){
        cin>>x;
        if(x<=k){l.insert(x);vm.insert(x);}
    }

    ll mm=0;
    if(vn.size()<k/2 || vm.size()<k/2){
        cout<<"no"<<endl;
        return;
    }
    for(ll i=0; i<k; i++){
        if(l.find(i+1)==l.end()){
            mm=1;
        }
    }
    if(mm==1){
        cout<<"no"<<endl;
        }else cout<<"yes"<<endl;

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


 



