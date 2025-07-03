#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 998244353
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

void mine(){

    int n; cin>>n;

    map<int,int>mp;

    vector<int>v(n+1);

    forl(i,n){
        cin>>v[i];
        mp[v[i]]++;
    }


    vector<int>cnt(n+3,0);
    int mex=0;
    for(auto it:mp){
        if(it.first==mex){
            mex++;
            cnt[it.second]++;

        }
    }

    vector<int>a(n+1,0);

    a[n]=1;

    for(int i=n-1; i>n-mex; i--){
        a[i]=a[i+1]+1;
    }

    a[0]=1;

    for1(i,n-mex){
        if(a[i])break;
        a[i]=a[i-1]+cnt[i];
    }

    for(auto i:a)cout<<i<<space;
    cout<<endl;

}

int main()
{
    int t=1; 
    cin>>t;
    // int c=1;
    while(t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }

    return 0;
}
