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
    vector<int>nn(n);
    for(int i=0; i<n; i++){
        cin>>nn[i];
    }
    int m; cin>>m;
    int a,b;
    vector<pair<int,int>>mm(m);
    for(int i=0; i<m; i++){
        cin>>a>>b;
        mm[i].first=a;
        mm[i].second=b;
        }

    vector<int>vv(n);
    vv[0]=0;
    vv[1]=1;
    for(int i=2; i<n; i++){
        if(nn[i]-nn[i-1]<nn[i-1]-nn[i-2]){
            vv[i]=vv[i-1]+1;
        }else {
            vv[i]=vv[i-1]+nn[i]-nn[i-1];
        }
        // cout<<vv[i]<<" ";
    }


    vector<int>kk(n);
    kk[n-1]=0;
    kk[n-2]=1;
    for(int i=n-3; i>=0; i--){
        if(nn[i+1]-nn[i]<nn[i+2]-nn[i+1]){
            kk[i]=kk[i+1]+1;
        }else {
            kk[i]=kk[i+1]+nn[i+1]-nn[i];
        }
        // cout<<kk[i]<<" ";
    }

    for(int i=0; i<m; i++){
        if(mm[i].first>mm[i].second){
            cout<<kk[mm[i].second-1]-kk[mm[i].first-1]<<endl;
        }else{
            cout<<vv[mm[i].second-1]-vv[mm[i].first-1]<<endl;
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


 



