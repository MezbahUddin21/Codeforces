#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define sp " "
// #define setprecision(x) cout << fixed << setprecision(x)

#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void maruf(){
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

void solve(){
    int n,sum=0; cin>>n;
    vector<int>v(n);
    vector<int>vv(n);
    vector<int>vc;
    for(int i=0; i<n; i++){
        cin>>v[i];
        vv[i]=v[i];
    }
    sum=v[0];
    vc.push_back(sum);
    sort(vv.begin(), vv.end());
    

    for(int i=1; i<n; i++){
        if((abs(v[i]%2)==0 && abs(v[i-1]%2)==0) || (abs(v[i]%2)==1 && abs(v[i-1]%2)==1) ){
            vc.push_back(max(sum,v[i]));
            sum=max(vv[0],v[i]);
        }else{
            if((sum+v[i])<v[i]){
                sum=v[i];
            }else{
                sum+=v[i];
            }
        vc.push_back(sum);

        }
    }
    sort(vc.begin(), vc.end());
    cout<<vc[vc.size()-1]<<endl;
    
}
 
int main() {
    maruf();
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}
