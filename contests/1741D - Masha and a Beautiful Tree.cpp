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


void printt(vector<int> v){
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}


int a[300005];

int call(int l,int r){
    if(l==r)return 0;

    int mid=(l+r)/2;

    int tl=call(l,mid);
    int tr=call(mid+1,r);

    if(tl==-1 || tr==-1)return -1;

    int ans=tl+tr;

    if(a[mid]+1==a[mid+1])return ans;
    if(a[r]+1==a[l]){
        for(int i=l; i<=mid; i++){
            swap(a[i],a[mid+(i-l)+1]);
        }
        return ans+1;
    }
    return -1;
}


void mine(){
    int n; cin>>n;
    forl(i,n){
        cin>>a[i];
        a[i]--;
    }

    int ans=call(0,n-1);

    cout<<ans<<endl;
    


}



 
signed main() {
    ios::sync_with_stdio(0),cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;

//    int c=1;
    while(t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}


