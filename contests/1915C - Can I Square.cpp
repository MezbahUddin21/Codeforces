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

//     int n; cin>>n;
//     string s; cin>>s;
//     // cout<<s[0]<<s[1];
//     for(int i=0; i<n; i++){
//         cout<<s[i];
//         if(s[i+1]=='a' ||  s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u'){
//             if(s[i+2]!='a' && s[i+2]!='e' &&s[i+2]!='i' &&s[i+2]!='o' &&s[i+2]!='u'){
//                 cout<<s[i+1]<<".";
//                 i++;
//             cout<<s[i];
//             }
//         }
// else cout<<".";
//     }
//     cout<<endl;


    int n; cin>>n;
    ll x;
    ll int sum=0;
    for(int i=0; i<n; i++){
        cin>>x;
        sum+=x;
    }
    if((long long int)sqrt(sum)*(long long int)sqrt(sum)==sum){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
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


 

