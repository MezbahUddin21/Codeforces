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
   int a,b;
   vector<ll>v1;
   vector<ll>v2;
   vector<ll>v3;

   while(n--){
    cin>>a>>b;
    if(a==1){
        v1.push_back(b);
    }else if(a==2){
        v2.push_back(b);
    }else if(a==3){
        v3.push_back(b);
    }
   }
    sort(v1.begin(),v1.end(), greater<>());
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end(), greater<>());
    int one=v1[0];
    int two=v2[0];
    if(one>two){
        cout<<0<<endl;
        return;
    }
    ll cnt=0;
    for(int i=0; i<v3.size(); i++){
        if(v3[i]>=one and v3[i]<=two){
            cnt++;
        }
    }
    cout<<two-one +1 -cnt<<endl;


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


 



