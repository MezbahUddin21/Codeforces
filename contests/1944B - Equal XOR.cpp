#include <bits/stdc++.h>
using namespace std;
#define pyes cout<<"yes"<<"\n";
#define pno cout<<"no"<<"\n";
#define sortv sort(v.begin(),v.end())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
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

void mine(){
    int n, k;cin >> n >> k;
    vector<int>vv(2 * n);
    set<int> s;
    map<int, int> m1;
    map<int, int> m2;
    vector<int> v;
    vector<int>a1;
    vector<int>a2;
    for (int i = 0; i < 2 * n; i++)cin >> vv[i];

    forl(i,n){
    s.insert(vv[i]);
    m1[vv[i]]++;
    }

    for (int i = n; i < 2 * n; i++){
        if (s.find(vv[i]) != s.end()) {
        v.push_back(vv[i]);
        }
        m2[vv[i]]++;
    }

    int l = k;

    for (auto e : m1){
    if (e.second == 2 and k != 0){
        k--;
    a1.push_back(e.first);
    a1.push_back(e.first);

    }
    }
    k = l;

    for (auto e : m2){
    if (e.second == 2 and k != 0){
        k--;
    a2.push_back(e.first);
    a2.push_back(e.first);

    }
    }
    k = 2 * k;

    int hh=v.size();

    for (int i = 0; i <= hh-1; i++){
    if (k != 0){
        k--;
    a1.push_back(v[i]);
    a2.push_back(v[i]);

    }
    }
    for (int i=0; i<a1.size(); i++){
        cout << a1[i] << " ";
    }cout << "\n";
    for (int i=0; i<a2.size(); i++){
        cout << a2[i] << " ";
    }cout << "\n";




}



 
int main() {
    mezbah();
    int t;
    cin>>t;
    
    while(t--){
        mine();
    }
    return 0;
}


 



