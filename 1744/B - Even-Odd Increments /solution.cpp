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
	int n,q; cin>>n>>q;
    int x;
    ll even=0,odd=0;
    int ec=0,oc=0;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x%2==0){
            even+=x;
            ec++;
        }else{
            odd+=x;
            oc++;
        }
    }
    int a,b;
    for(int i=0; i<q; i++){
        cin>>a>>b;
 
        if(a==0){
            if(b%2==1){
                odd+=ec*b+even;
                even=0;
                oc+=ec;
                ec=0;
            }else{
                even+=ec*b;
            }
        }else{
            if(b%2==1){
                even+=oc*b+odd;
                odd=0;
                ec+=oc;
                oc=0;
            }else{
                odd+=oc*b;
            }
        }
        cout<<(even+odd)<<endl;
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
 
 
 
 