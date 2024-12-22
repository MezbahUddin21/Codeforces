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
    int n,m,k; cin>>n>>m>>k;

    vector<int>a(m);
    vector<int>q(k);

    forl(i,m)cin>>a[i];
    forl(i,k)cin>>q[i];

    if(n-1>k){
        forl(i,m)cout<<0;
        cout<<endl;
        return;
    }else if(n==k){
        forl(i,m)cout<<1;
        cout<<endl;
        return; 
    }


    int miss=n;

    forl(i,k){
        if(i+1!=q[i]){
            miss=i+1;
            break;
        }
    }


        forl(i,m){
            if(a[i]==miss)cout<<1;
            else cout<<0;
        }cout<<endl;


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


