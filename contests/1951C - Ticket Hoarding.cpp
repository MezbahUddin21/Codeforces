#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define all(v) (v.begin(), v.end())
#define pyes cout<<"YES"<<"\n";
#define pno cout<<"NO"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
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
ll max_subarr(vector <ll>v){
    int n=v.size();
    ll max_sum,curr_sum;
    max_sum=curr_sum=0;
    for(int i=0; i<n; i++){
        curr_sum=max(curr_sum+v[i],v[i]);
        max_sum=max(max_sum, curr_sum);
    }   
    return max_sum;
}

 
ll solve(vector<ll> v, int k)
{
    ll ans = (k > 0);
    for (int i = k + 1; i < v.size(); i++) {
        if (v[i] < v[k])
            ans++;
        else
            break;
    }
    return ans;
}

void mine(){
    ll n,m,k; cin>>n>>m>>k;
    vector<ll>v(n);
    for(auto &i:v)cin>>i;
    sort all(v);
    if(m>=k){
        cout<<v[0]*k<<endl;
        return;
    }else{
        ll ans=0;
       ll noE=k/m;
        ll add=0;
        if(k%m){
            ans+=(k%m)*v[noE];
            add+=k%m;
            k-=k%m;
        }
        for(int i=noE-1; i>=0; i--){
            ans+=m*(v[i]+add);
            add+=m;
        }
        cout<<ans<<endl;



    }

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


 










