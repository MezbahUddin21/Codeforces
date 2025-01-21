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



void mine() {
    int n; cin>>n;

    vector<int>v(n);

    map<int,int>mp;


    forl(i,n){
        cin>>v[i];
        mp[v[i]]++;
    }

    sort all(v);

    int maxd=0;

    for(auto it:mp){
        if(it.second>1){
            maxd=max(it.first,maxd);

        }
    }


    if(maxd==0){
        cout<<-1<<endl;
        return;
    }



    v.erase(find(v.begin(),v.end(),maxd));
    v.erase(find(v.begin(),v.end(),maxd));



    n-=2;

    forl(i,n-1){
        if(v[i+1]-v[i]<2*maxd){
            cout<<maxd<<space<<maxd<<space<<v[i]<<space<<v[i+1]<<endl;
            return;
        }
    }

    cout<<-1<<endl;

}

 
signed main() {
    fast;
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
