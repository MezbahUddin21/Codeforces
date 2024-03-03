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

void solve() {
    int n; cin>>n;
    int res=1;
    while(res<=n){
res*=2;
    }
    res/=2;
    cout<<res-1<<endl;
}

    // ll l=1;
    // for(int i=0; i<n; i+=2){
    //     if(v[i]==1){
    //         l=2;
    //         break;
    //     }
    // }

    // ll gc=__gcd(v[0],v[2]);
    // if(n>5)for(int i=4; i<n; i+=2){
    //         gc=__gcd(gc,v[i]);
    // }

    // if(l==2){
    //     for(int i=0; i<n; i+=2){
    //         if(v[i]%2==0){
    //             cout<<0<<endl;
    //             return;
    //         }
    //     }
    //     cout<<2<<endl;
    //     return;
    // }else for(int i=1; i<n; i+=2){
    //     if(v[i]%gc==0){
    //         cout<<0<<endl;
    //         return;
    //     }
    // }
    // cout<<gc<<endl;


    
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


 



