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
   ll n; cin>>n;
   ll sum1=0,sum2=0;
   vector<ll>v1(n);
   vector<ll>v2(n);
   vector<pair<ll,int>>vc(n);

   for(int i=0; i<n; i++){
    cin>>v1[i];
    sum1+=v1[i];
   }
   for(int i=0; i<n; i++){
    cin>>v2[i];
    sum2+=v2[i];
   }
   for(int i=0; i<n; i++){
    vc[i].first=v1[i]+v2[i];
    vc[i].second=i;
   }

   sort(vc.begin(),vc.end(),greater<>());

   for(int i=0; i<n; i++){
    if(i%2==0){
        sum2-=v2[vc[i].second];
        sum1-=1;
    }else{
        sum1-=v1[vc[i].second];
        sum2-=1;
    }
   }

   cout<<sum1-sum2<<endl;
   
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


 



