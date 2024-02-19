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


// void solve(){
//     int n; cin>>n;
//     vector<ll>nn(n);
//     for(auto &i:nn)cin>>i;
//     int k=1, l=nn[0];
//     for(int j=1; j<n; j++){
//         if(nn[j]>l){
//             l=nn[j];
//         }else{
//             int ss=nn[j];
//             while(ss<=l){
//                 k++;
//                 ss=nn[j]*k;
//             }
//             k=1;
//             l=ss;
//         }
//     }
//     cout<<l<<endl;
// }


void solve() {
   int n,m; cin>>n>>m;
   vector<ll>nn(n);
   vector<ll>mm(m);
   for(auto &i:nn)cin>>i;
   for(auto &i:mm)cin>>i;
   sort(nn.begin(),nn.end(),greater<>());
   sort(mm.begin(),mm.end());
    ll sum=0;
    ll ln=0,lm=0,rn=n-1,rm=m-1;
    while(ln<=rn){
        int left=abs(nn[ln]-mm[lm]);
        int right=abs(nn[rn]-mm[rm]);
        int mx=max(left,right);
        sum+=mx;
        if(left>=mx){
            ln++;
            lm++;
        }else{
            rn--;
            rm--;
        }
    }


   cout<<sum<<endl;
    
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


 



