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

    vector<int>v(n+1);

    for1(i,n)cin>>v[i];


    vector<int>pre(n+1,0);
    vector<int>suf(n+1,0);

    for1(i,n){
        pre[i]+=(pre[i-1]+(v[i]<=k));
    }

    for(int i=n; i>0; i--){
        if(i==n){
            suf[i]+=(v[i]<=k);
            continue;
        }

        suf[i]+=(suf[i+1]+(v[i]<=k));
    }

    int cnt=0;

    int l=-1,r=-1;

    for1(i,n-1){
        if(i>0 and pre[i]==pre[i-1])continue;

        if(pre[i]>=(i+1)/2){
            cnt++;
            if(l==-1)l=i;
        }
    }

    if(cnt>=2){
        pyes
        return;
    }

    cnt=0;
    for(int i=n; i>1; i--){

        if(i<n and suf[i]==suf[i+1])continue;
        if(suf[i]>=(n-i+1+1)/2){
            cnt++;
            if(r==-1)r=i;
        }
    }
    
    if(cnt>=2){
        pyes
        return;
    }

    if(l!=-1 and r!=-1 and r-l>=1){
        pyes
        return;
    }


    pno



}



int main() {
    fast;
    
    ll t = 1; 
    cin>>t;
    // cin.ignore();
    // ll c=1;
    while (t--) {    
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}



