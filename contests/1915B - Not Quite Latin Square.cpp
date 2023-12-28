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
    string a,b,c;
    cin>>a>>b>>c;
    int A=0,B=0,C=0,q=0;
    for(int i=0; i<3; i++){
        if(a[i]=='A')A++;
        else if(a[i]=='B')B++;
        else if(a[i]=='C')C++;
        else if(a[i]=='?')q++;
    }
    if(q==1){
        if(A==0)cout<<"A"<<endl;
       else if(B==0)cout<<"B"<<endl;
        if(C==0)cout<<"C"<<endl;
        return;
    }
    A=0,B=0,C=0,q=0;
    for(int i=0; i<3; i++){
        if(b[i]=='A')A++;
        else if(b[i]=='B')B++;
        else if(b[i]=='C')C++;
        else if(b[i]=='?')q++;
    }
    if(q==1){
        if(A==0)cout<<"A"<<endl;
       else if(B==0)cout<<"B"<<endl;
        if(C==0)cout<<"C"<<endl;
        return;
    }
    A=0,B=0,C=0,q=0;
    for(int i=0; i<3; i++){
        if(c[i]=='A')A++;
        else if(c[i]=='B')B++;
        else if(c[i]=='C')C++;
        else if(c[i]=='?')q++;
    }
    if(q==1){
        if(A==0)cout<<"A"<<endl;
       else if(B==0)cout<<"B"<<endl;
        if(C==0)cout<<"C"<<endl;
        return;
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


 

