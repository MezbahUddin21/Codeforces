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



void mine(){
    int n,k; cin>>n>>k;

    multiset<int>s;

    forl(i,n){
        int x; cin>>x;
        s.insert(x);
    }
    int prev=0,cnt=0;
    int ans=0;
    for(auto it:s){
        int w=it-prev;
        ll t=1LL*w*(n-cnt);
        if(k<=t){
            ans+=k+((cnt+1)>1);
            cout<<ans<<endl;
            return;
        }else{
            ans+=t+((cnt+1)>1);
            k-=t;
        }
        cnt++;
        prev=it;
    }
    

}


 
int main() {
    int t;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}



