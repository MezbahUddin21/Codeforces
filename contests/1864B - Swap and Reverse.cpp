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
    int n,k; cin>>n>>k;
    string s;  cin>>s;
    if(k%2==0){
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }else{
        vector<char>oi;
        vector<char>ei;
        for(int i=0; i<n; i++){
            if(i%2==0){
                oi.push_back(s[i]);
            }else{
                ei.push_back(s[i]);
            }
        }
        int oii=0,eii=0;
        sort(oi.begin(),oi.end());
        sort(ei.begin(),ei.end());
        vector<char>v;
        for(int i=0; i<n; i++){
            if(i%2==0){
                v.push_back(oi[oii]);
                oii++;
            }else{
                v.push_back(ei[eii]);
                eii++;
            }
        }
        for(int i=0; i<n; i++){
            cout<<v[i];
        }cout<<endl;
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


 



