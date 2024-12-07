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

    string s; cin>>s;

    int n=s.size();

    int tw=0;
    int th=0;
    ll sum=0;
    for(int i=0; i<n; i++){
        sum+=s[i]-'0';
        if(s[i]=='2')tw++;
        else if(s[i]=='3')th++;
    }

    if(sum%9==0){
        pyes
        return;
    }

    for(int i=0; i<=min(100,tw); i++){
        for(int j=0; j<=min(100,th); j++){
            if((sum+(2LL*i)+(6LL*j))%9LL==0){
                pyes
                return;
            }
        }
    }

    pno
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


