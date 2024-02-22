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
   int n,s; cin>>n>>s;
   vector<int>v(n);
   vector<int>no(n);
   ll sum=0;
   for(int i=0; i<n; i++){
    cin>>v[i];
    sum+=v[i];
   }
   if(sum<s){
    cout<<-1<<endl;
    return;
   }
   int end=n;
   for(int i=n-1;i>=0; i--){
        no[i]=end;
        if(v[i]==1)end=i;

   }

   int ans=2*10e5+1,st=0;
   sum=0;
   queue<int>qu;
   for(int i=0; i<n; i++){
    qu.push(v[i]);
    sum+=v[i];
    while(sum>s and !qu.empty()){
        sum-=qu.front();
        qu.pop();
        st++;
    }
    ans=min(ans,st+(n-no[i]));
   }

cout<<ans<<endl;

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


 



