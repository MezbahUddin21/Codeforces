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
    vector<ll>v(3);
    ll a,b,c; cin>>a>>b>>c;
    if(a > max(b,c)) cout << 0 << ' ';
    else cout << max(b,c)-a+1 << ' ';
    if(b > max(a,c)) cout << 0 << ' ';
    else cout << max(a,c)-b+1 << ' ';
    if(c > max(a,b)) cout << 0 << ' ';
    else cout << max(a,b)-c+1<< ' ';
    cout << '\n';

}

// void solve() {
//     string a,b; cin>>a>>b;
//     int na=a.size();
//     int nb=b.size();
//     string x,y,ans;
//     for(int i=na-1; i>=0; i--){
//         if(a[i]<b[nb]){
//             ans+=to_string((int)b[nb]-(int)a[i]);
//             cout<<(int)b[nb]-(int)a[i]<<endl;
//         }else{
//             if(b.size()==na){
//                 cout<<-1<<endl;
//                 return;
//             }
//             ans+=to_string((int)(b[nb]+b[nb-1])-(int)a[i]);
//             nb-=1;

//         }
//     }
//     cout<<ans<<endl;
// }

// void solve() {
//     int a,b,c; cin>>a>>b>>c;
//     int gg=__gcd(a,__gcd(b,c));
//     if(gg==1 and a!=1 and a!=1 and a!=1){
//         cout<<"no"<<endl;
//         return;
//     }
//     if((gg==a and gg==b and c/gg!=3) || (c/gg!=1 and gg==b and gg==c)){
//         cout<<"no"<<endl;
//         return;
//     }
//     cout<<"yes"<<endl;
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


 



