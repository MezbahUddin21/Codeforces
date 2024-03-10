#include <bits/stdc++.h>
using namespace std;
#define sortv sort(v.begin(),v.end())
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

void solve(){
    ll n,d;
    cin>>n>>d;
    vector<ll>v(n);
    for(auto &i:v)cin>>i;
    sort(v.begin(),v.end(),greater<>());
    int cnt=0;
    for(int i=0; i<n; i++){
        if(v[i]>d){
            cnt++;
        }else{
            ll f=d/v[i]+1;
            if(f<=n-i){
                cnt++;
                n-=f-1;
            }

        }
    }
    cout<<cnt<<endl;

}

 
int main() {
    mezbah();
    // int t;
    // cin>>t;
    
    // while(t--){
        solve();
    // }
    return 0;
}


 



