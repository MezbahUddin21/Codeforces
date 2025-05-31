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

    ll n,x,k; cin>>n>>x>>k;

    string s; cin>>s;

    ll cnt=0;

    forl(i,n){
        if(s[i]=='L')x--;
        else x++;

        if(x==0 and i+1<=k){
            cnt++;
            k-=(i+1);
            break;
        }
    }

    if(cnt==0){
        cout<<0<<endl;
        return;
    }

    ll tcnt=k;

    forl(i,n){
        if(s[i]=='L')x--;
        else x++;

        if(x==0 and i+1<=k){
            tcnt=i;
            break;
        }
    }

    if(tcnt==0){
        cout<<cnt<<endl;
        return;
    }

    cnt+=k/(tcnt+1);

    cout<<cnt<<endl;

    
}



 
signed main() {
    int t=1;

    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}


