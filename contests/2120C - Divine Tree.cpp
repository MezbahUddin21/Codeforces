// this isn't my code. Just to test


#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define fi first
#define se second
#define pb emplace_back
#define debug(x) (cerr<<#x": "<<(x)<<endl)
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
using namespace std;

ll n,m;
ll a[1000005];
vector<int> v;
void work(){
	cin>>n>>m;
	if(m<n){cout<<"-1\n";return;}
	if(m>n*(n+1)/2){cout<<"-1\n";return;}
	m-=n;
	rep(i,1,n){
		if(m>n-i) m-=n-i,a[i]=n-i+1;
		else a[i]=m+1,m=0;
	}
	// rep(i,1,n) a[i]+=i;
	v.reserve(n+1);
	a[0]=n+1;
	rep(i,0,n+1) if(a[i]<a[i-1]){
		rep(j,a[i]+1,a[i-1]-1) v.pb(j);
	}
	reverse(v.begin(),v.end());
	per(i,n,1) if(a[i]==a[i-1]){
		a[i]=v.back();v.pop_back();
	}
	cout<<a[1]<<'\n';
	rep(i,2,n) cout<<a[i-1]<<' '<<a[i]<<'\n';
}
int32_t main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int _;cin>>_;while(_--) work();
	return 0;
}
