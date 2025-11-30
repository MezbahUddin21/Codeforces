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

/*
    array a and b len n

    total no. turn k

    taking turns modifing a

    turns,
        a player must choose an index i,
            1. ai+=bi
            2. ai-=bi
    
    max non-empty subarray sum of the modified array a

    alice goal is to maximize 
    bob goal is to minimize


*/


ll maxSubarraySum(vector<ll>&arr){
    
    ll res=arr[0];           
    ll maxEnding=arr[0];     

    for (ll i=1; i<arr.size();i++){
    
        maxEnding=max(arr[i],maxEnding+arr[i]);
        res=max(res,maxEnding);
    }
    return res;
}

// struct Node{
//     vector<ll>v;
//     Node() { v.resize(3); }

// };


void mine(){

    
    ll n,k; cin>>n>>k;

    vector<ll>a(n);
    vector<ll>b(n);

    forl(i,n)cin>>a[i];

    ll mx=0;

    forl(i,n){
        cin>>b[i];
        
        mx=max(mx,b[i]);

    }

    if(k%2==0){

        cout<<maxSubarraySum(a)<<endl;
        return;

    }

    if(n==1){

        cout<<a[0]+b[0]<<endl;
        return;

    }

    ll res=a[0];           
    ll maxEnding=a[0];     

    vector<ll>sta(n);
    vector<ll>endd(n);

    sta[0]=a[0];

    for (ll i=1; i<a.size();i++){

    
        // if(a[i]>maxEnding){
        //     ll e=(i-2>=0)?i-2:i-1;

        //     Node vv;
        //     vv.v[0]=start;
        //     vv.v[1]=e;
        //     vv.v[0]=maxEnding;

        //     pos.pb(vv);

        //     start=

        // }
        maxEnding=max(a[i],maxEnding+a[i]);

        sta[i]=maxEnding;


        res=max(res,maxEnding);
    }

    res=a[n-1];           
    maxEnding=a[n-1];    
    
    endd[n-1]=a[n-1];

    for(ll i=n-2; i>=0; i--){

    
        maxEnding=max(a[i],maxEnding+a[i]);

        endd[i]=maxEnding;


        res=max(res,maxEnding);
    }



    mx=-LONG_MAX;

    forl(i,n){
        mx=max(mx, sta[i]+endd[i]+b[i]-a[i]);
    }

    cout<<mx<<endl;



}

int main() {
    fast;
    ll t = 1;
    cin>>t;
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
