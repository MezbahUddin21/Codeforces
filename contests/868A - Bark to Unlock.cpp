#include <bits/stdc++.h>
using namespace std;
#define pyes cout<<"yes"<<"\n";
#define pno cout<<"no"<<"\n";
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

void mine(){
    string s; cin>>s;
    char c1=s[0],c2=s[1];
    int n; cin>>n;
    vector<string>v(n);
    int l1=0,l2=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
            string s=v[i];
            reverse(s.begin(),s.end());
        if((v[i][0]==c1 and v[i][1]==c2)){
            cout<<"yes"<<endl;
            return;
        }else if(v[i][0]==c2 and v[i][1]==c1){

            cout<<"yes"<<endl;
            return;
        }else if((v[i][1]==c1) and l1==0){
            l1=1;
        }else if((v[i][0]==c2 ) and l2==0){
            l2=1;
        }
    }
    if(l1==1 and l2==1){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}
 
int main() {
    mezbah();
    // int t;
    // cin>>t;
    
    // while(t--){
        mine();
    // }
    return 0;
}


 



