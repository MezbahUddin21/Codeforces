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
void solve(){
    int n,result=0,a=0,b=0; cin>>n;
    int d=(1LL<<31);
    d-=1;
    map<ll,ll>aa; 
    for(int i=0; i<n; i++){
        cin>>a;b=d-a;
        if(aa[a]!=0){
            aa[a]--;
        }else{
            result++;
            aa[b]++; 
        }
    }
    cout<<result<<endl;
}

// void solve() {
//    int n; cin>>n;
//    ll sum=0;
//    if(n<10){
//     sum=(n*(n+1))/2;
//     cout<<sum<<endl;
//     return;
//    }else{
//     sum=45;
//    }

//    for(int i=1; i<=n;i++){
//     sum+=stoi(i);
//    }
// }

 
int main() {
    mezbah();
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}


 



