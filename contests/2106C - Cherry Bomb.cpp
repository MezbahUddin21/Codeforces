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


 
void mine(){
    
    int n,k; cin>>n>>k;

    vector<int>a(n);
    vector<int>b(n);

    forl(i,n)cin>>a[i];
    forl(i,n)cin>>b[i];

    int mx=0;

    int mxb=-1;
    int mn=INT_MAX;

    int mxsum=0;
    int cnt=0;
    int prev=-1;

    forl(i,n){
        mx=max(mx,a[i]);
        mxb=max(mxb,b[i]);
        mn=min(mn,a[i]);

        mxsum=max(mxsum,max(a[i],a[i]+b[i]));

        if(b[i]!=-1){
            if(prev!=-1){
                if(prev!=(a[i]+b[i])){
                    cout<<0<<endl;
                    return;
                }
            }
            prev=a[i]+b[i];
        }
    }



    if(mxb==-1){
        cout<<mn+k-mx+1<<endl;
        return;
    }

    forl(i,n){
        if(b[i]==-1){
            if(mxsum-a[i]>k){
                cout<<0<<endl;
                return;
            }
        }else if(mxsum>(a[i]+b[i])){
            cout<<0<<endl;
            return;
        }
    }

    cout<<1<<endl;
    

}
 
int main() {
    fast;

    int t = 1; 
    cin>>t;
    // int c=1;
    while (t--) {

        // cout<<"Case "<<c<<":"<<endl; c++;
        mine();
    }
    return 0;
}
