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
    string l="marufahmeed";
    cout<<l.substr(0,0)<<endl;
    long long n;
    cin>>n;
    vector<string>s(n);
    map<string,int>m;
    for(int i=0; i<n; i++){
        cin>>s[i];
        m[s[i]]++;
    }

    for(int i=0; i<n; i++){
            int l=0;
        for(int j=0; j<s[i].size(); j++){
            string x=s[i].substr(0,j+1);
            string y=s[i].substr(j+1,s[i].size());
            // cout<<x<<" "<<y<<" ";
            if(m[x]>=1 and m[y]>=1){
                cout<<1;
                l=1;
                break;
            };
        }
        if(l==1){
            continue;
        }else cout<<0;
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


 



