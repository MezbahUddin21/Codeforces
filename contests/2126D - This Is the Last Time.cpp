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

#define f first
#define s second

void mine(){

    int n,k; cin>>n>>k;

    vector<pair<int,pair<int,int>>>v(n);

    forl(i,n){
        int l,r,re; cin>>l>>r>>re;
        v[i].f=l;

        v[i].s.f=r;
        v[i].s.s=re;

    }

    sort all(v);

    ll real=k;

    forl(i,n){
        if(real<=v[i].s.s and real>=v[i].f)real=v[i].s.s;
    }

    cout<<real<<endl;
    
}



signed main() {
    ios::sync_with_stdio(0),cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;

// int c=1;
    while(t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}


