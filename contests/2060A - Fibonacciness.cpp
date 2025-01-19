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
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int cnt(int a,int b,int c,int d,int e) {
    int ans = 0;
    if (c==a+b) ans++;
    if (d==b+c) ans++;
    if (e==c+d) ans++;
    return ans;

}

int mine() {
    
        int a,b,d,e; cin>>a>>b>>d>>e;
        int c = a+b ;
        int ans=0;
        ans =cnt(a,b,c,d,e);

        c =d-b;
        int f = cnt(a,b,c,d,e);
        if (f > ans) ans = f;

        c = e - d;
        f = cnt(a,b,c,d,e);
        if (f > ans)ans=f;

        cout<<ans<<endl;


}

 
int main() {
    fast;
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
