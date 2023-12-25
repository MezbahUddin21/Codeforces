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
    vector<pair<int,int>>v1(n);
    vector<pair<int,int>>v2(n);
    vector<pair<int,int>>v3(n);
    for(int i=0; i<n; i++){
        cin>>v1[i].first;
        v1[i].second=i;
    }
    for(int i=0; i<n; i++){
        cin>>v2[i].first;
        v2[i].second=i;
    }
    for(int i=0; i<n; i++){
        cin>>v3[i].first;
        v3[i].second=i;
    }
    int res=0;
    sort(v1.begin(),v1.end(),greater<>());
    sort(v2.begin(),v2.end(),greater<>());
    sort(v3.begin(),v3.end(),greater<>());
    for(int i=0; i<3; i++){
        for(int j=0;j<3; j++){
            for(int k=0; k<3; k++){
                if(v1[i].second!=v2[j].second and v1[i].second!=v3[k].second and  v2[j].second!=v3[k].second){
                    res=max(v1[i].first+v2[j].first+v3[k].first,res);
                }
            }
        }
    }
    cout<<res<<endl;

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


 

