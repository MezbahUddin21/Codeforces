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

vector<ll> mPrimeFact(ll x){
	vector<ll> fact;
	for(ll i=2; i * i <= x; i++){
		ll cnt=0; 
		while(x % i == 0){
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
 int n;
 cin >> n;
 string ss[n];
 for (int i=0; i < n; i++){
     int num;
     cin >> num;
     ss[i] =to_string(num);
 }
 string ans="yes";
 int cro=0;
 string one=ss[0];
 if (one.size() == 1){
     cro=one[0] - '0';
 }else{
     int v=one[0] - '0';
     int vv=one[1] - '0';
     if (v <= vv){
         cro=vv;
     }else{
         cro=stoi(one);
     }
 }
 for (int i=1; i < n; i++){
     string s=ss[i];
     if (s.size() == 1){
         int val=s[0] - '0';
         if (val < cro){
             ans="no";
             break;
         }else{
             cro=val;
         }
     }else{
         int v=s[0] - '0';
         int vv=s[1] - '0';
         int al=stoi(s);
         if (v <= vv){
             if (cro <= v){
                 cro=vv;
             }else{
                 if (al >= cro){
                     cro=al;
                 }else{
                     ans="no";
                 }
             }
         }else{
             if (al >= cro){
                 cro=al;
             }else{
                 ans="no";
             }
         }
     }
 }
 cout << ans << endl;

    

}

// void solve(){
//     ll n,k; cin>>n>>k;
//     vector<pair<int,pair<int,int>>>v(n);
//     int x;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         if(x%k!=0){
//             v[i].one=x/k+1;
//         }
//         else{
//             v[i].one=x/k;  
//         }
//         v[i].second.one=n-i;
//         v[i].second.second=i+1;
//     }
//     sort(v.begin(),v.end(),greater<>());
//     v[n-1].one-=1;
//     for(int i=0; i<n; i++){
//         cout<<v[i].one<<" ";
//     }cout<<endl;
//     for(int i=0; i<n; i++){
//         cout<<v[i].second.second<<" ";
//     }cout<<endl;

// }

 
int main(){
    mezbah();
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}


 



