#include <bits/stdc++.h>
using namespace std;
#define sortv sort(v.begin(),v.end())
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
bool redd(ll n){
    ll a=n;
    while(n){
        if(n%10 !=0 and a%(n%10)){
            return false;
        }
        n/=10;
    }
    return true;
}

void solve(){
    ll n; cin>>n;

    while(!redd(n))n++;
    cout<<n<<endl;


}

// void solve(){
//     ll n,k; cin>>n>>k;
//     vector<pair<int,pair<int,int>>>v(n);
//     int x;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         if(x%k!=0){
//             v[i].first=x/k+1;
//         }
//         else{
//             v[i].first=x/k;  
//         }
//         v[i].second.first=n-i;
//         v[i].second.second=i+1;
//     }
//     sort(v.begin(),v.end(),greater<>());
//     v[n-1].first-=1;
//     for(int i=0; i<n; i++){
//         cout<<v[i].first<<" ";
//     }cout<<endl;
//     for(int i=0; i<n; i++){
//         cout<<v[i].second.second<<" ";
//     }cout<<endl;

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


 



