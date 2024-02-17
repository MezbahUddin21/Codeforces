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


// void solve(){
//     ll n; cin>> n;
//     vector<int>v(n);
//     int k;
//     for(auto &i:v)cin>>i;
//     vector<int>post(n,0);
//     for(int i=1; i<n; i++){
//         if(v[i]!=v[i-1]){
//             k=i-1;
//             while(post[k]==0){
//                 post[k]==i+1;
//                 k--;
//             }
//         }
//     } post[n-1]=-1;
//     for(int i=0; i<n; i++)cout<<post[i];
//     cout<<endl;
//     int q ; cin>>q;
//     int a,b;
//     for(int i=0; i<q; i++){
//         cin>>a>>b;
//         if(post[a-1]!=0 && post[a-1]<=b){
//             cout<<a<<" "<<post[a-1]<<endl;
//         }else{
//             cout<<-1<<" "<<-1<<endl;
//         }
//     }
//     cout<<endl;

// }

int cel(int a,float l){
    return ceil(a/l);
}

void solve(){

    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    } int c0=0,c1=0,c2=0;
    for(int i=0; i<n; i++){
        if(v[i]%3==0)c0++;
        else if(v[i]%3==1)c1++;
        else if(v[i]%3==2)c2++;
    }
    // cout<<c0<<" "<<c1<<" "<<c2<<endl;
    int h=n/3;
    int cnt=0;
    int t=1;
    // cout<<c0<<" "<<c1<<" "<<c2<<endl;
        if(c0>h){
            int m=c0-h;
            c1+=m;            cnt+=m;
            c0=h;
        }
        if(c1>h){
            int m=c1-h;
            c2+=m;            cnt+=m;
            c1=h;
        }
        if(c2>h){
            int m=c2-h;
            c2=h;
            c0+=m;            cnt+=m;
        }
    
        if(c0>h){
            int m=c0-h;
            c1+=m;            cnt+=m;
            c0=h;
        }
        if(c1>h){
            int m=c1-h;
            c2+=m;            cnt+=m;
            c1=h;
        }
        if(c2>h){
            int m=c2-h;
            c2=h;
            c0+=m;            cnt+=m;
        }
    

    

    cout<<cnt<<endl;
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


 



