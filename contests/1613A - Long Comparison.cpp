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
 ll x1, p1, x2, p2; cin >> x1 >> p1 >> x2 >> p2;
    int t = min(p1, p2); p1 -= t; p2 -= t;
    if (p1 > 6){
        cout << '>' << endl;
    }
    else if (p2 > 6){
        cout << '<' << endl;
    }
    else{
        x1 *= pow(10, p1);
        x2 *= pow(10, p2);
        if (x1 > x2){
            cout << '>' << endl;
        }
        else if (x1 < x2){
            cout << '<' << endl;
        }
        else{
            cout << '=' << endl;
        }

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


 

