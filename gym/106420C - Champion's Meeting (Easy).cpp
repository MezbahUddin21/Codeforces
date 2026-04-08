
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1e9+7
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"yes"<<"\n";
#define pno cout<<"no"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

 


void mine(){
 

	int n,m,k; cin>>n>>m>>k;


	vector<int>v;
	vector<int>vv;


	forl(i,n){
		int x;cin>>x;

		v.pb(x);
	}

	forl(i,m){
		int x;cin>>x;

		vv.pb(x);
	}

	int i=0,j=0;

	string ans="";

	while(i<n and j<m){

		if(v[i]<vv[j]){
			ans+='A';
			i++;
		}else{
			ans+='B';
			j++;
		}

	}

	

	if(i<n)for(int k=i; k<n; k++){
		ans+='A';
	}

	if(j<m)for(int k=j; k<m; k++){
		ans+='B';
	}


	cout<<ans<<endl;




}



int main() {
    fast;

    ll t = 1;
    // cin>>t
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
