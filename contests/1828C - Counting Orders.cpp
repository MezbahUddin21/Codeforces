#include <bits/stdc++.h>
using namespace std;
#define pyes cout<<"yes"<<"\n";
#define pno cout<<"no"<<"\n";
#define sortv sort(v.begin(),v.end())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
void mezbah(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void printt(vector<int> v){
    cout<<v.size()<<endl;
    for(int i=1; i<=v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;
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
    int n; cin>>n;
    vector<int>a(n+1,0),b(n+1,0);
    for1(i,n)cin>>a[i];
    for1(i,n)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=1; i<=n; i++){
        if(b[i]>=a[i]){
            cout<<0<<endl;
            return;
        }
    }
    ll mul=1;
    for(int i=1; i<=n; i++){
        int l=i,r=n;
        int mid;
        if(a[i]>b[n]){
            mul*=n-i+1;
            mul%=1000000007;
        }else{
        while(l<=r){
           mid=(r+l)/2;
           if(b[mid]<a[i] and b[mid+1]>=a[i]){
                mul*=mid-i+1;
                mul%=1000000007;
                break;
           }else if(b[mid]<a[i])l=mid+1;
           else r=mid-1;
        }
        }
    } 

    cout<<mul<<endl;
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


 



