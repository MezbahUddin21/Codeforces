#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    	ll n,k;
    	cin>>n>>k;
    	vector<ll>v(n);
    	for(auto &e:v)cin>>e;
    	sort(v.rbegin(), v.rend());
    	ll l=0, r=n-2*k;
    	ll sum= accumulate(v.begin(), v.begin()+r,0ll);
    	ll ans=sum;
    	while(r<n-1){
    	    sum+=v[r]+v[r+1];
    	    r+=2;
    	    sum-=v[l++];
    	    ans=max(ans,sum);
    	}
    	cout<<ans<<endl;
    }
    return 0;
}

