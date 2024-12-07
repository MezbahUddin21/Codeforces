#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"YES"<<"\n";
#define pno cout<<"NO"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast {ios_base::sync_with_stdio(false); cin.tie(0);}


void mine(){
    
    int n; cin>>n;

if (n%2)
		{
			cout<<n<<endl;
			for (int i=2;i<n-2;++i) cout<<i<<' ';
			cout<<1<<' '<<n-2<<' '<<n-1<<' '<<n<<endl;
		}
		else if (n==6)
		{
			cout<<7<<endl<<"1 2 4 6 5 3"<<endl;
		}
		else
		{
			int u=1<<__lg(n);
			set<int> s;
			for (int i=1;i<=n;++i) s.insert(i);
			s.erase(1);
			s.erase(3);
			s.erase(u);
			s.erase(u-1);
			s.erase(u-2);
			cout<<u*2-1<<endl;
			for (auto x: s) cout<<x<<' ';
			cout<<"1 3 "<<u-2<<' '<<u-1<<' '<<u<<endl;
		}

}



 
int main() {
    fast
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}


