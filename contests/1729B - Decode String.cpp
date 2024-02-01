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
    string s; cin>>s;
    string f="abcdefghijklmnopqrstuvwxyz";
    string k="";
    for(int i=n-1; i>=0; i--){
        string l="";
        if(s[i]=='0'){
            l.push_back(s[i-2]);
            l.push_back(s[i-1]);
            k.push_back(f[stoi(l)-1]);
            i-=2;
        }else{
            l.push_back(s[i]); 
            k.push_back(f[stoi(l)-1]);
        }
    }
    reverse(k.begin(),k.end());
    cout<<k<<endl;
}

// void solve(){
//     int n; cin>>n;
//     string s; cin>>s;
//     string f="abcdefghijklmnopqrstuvwxyz";
//     string k;
//     for(int i=n-1; i>=0; i--){
//         string l;
//         if(s[i]=='0'){
//             l.push_back(s[i-1]);
//             l.push_back(s[i-2]);
//             k.push_back(f[stoi(l)-1]);
//             i-=2;
//         }else{
//             l.push_back(s[i]); 
//             k.push_back(f[stoi(l)-1]);
//         }
//     }
//     cout<<k<<endl;
    
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


 



