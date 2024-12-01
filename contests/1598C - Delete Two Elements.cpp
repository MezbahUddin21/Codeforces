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

    vector<int>v(n);
    map<int,int>mp;

    forl(i,n){
        cin>>v[i];
        mp[v[i]]++;
    }
    ll sum=accumulate(v.begin(),v.end(),0LL);
    

    if((2*sum)%n!=0){
        cout<<0<<endl;
        return;
    }

    ll favg=(sum*2)/n;

    ll ans=0;

    for(int i=0; i<n; i++){
        int x=v[i];
        int y=favg-v[i];

        if(mp.count(y))ans+=mp[y];

        if(x==y)ans--;
    }

    ans/=2;

    cout<<ans<<endl;


    
    
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


