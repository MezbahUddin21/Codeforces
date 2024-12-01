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
    ll a,s; cin>>a>>s;

    string b;

    while(s>0){
        ll ad=a%10;
        ll sd=s%10;
        ll bd=(10+sd-ad)%10;

        if(ad+bd==sd){
            b=to_string(bd)+b;

            a/=10;
            s/=10;
        }
        else if(ad+bd == s%100){
            b=to_string(bd)+b;
            a/=10;
            s/=100;
        }else{
            cout<<-1<<endl;
            return;
        }
    }

    if(a!=0){
        cout<<-1<<endl;
    }else{
        int f=0;
        for(int i=0; i<b.size(); i++){
            if(f==0 and b[i]!='0')f=1;

            if(f==0 and b[i]=='0')continue;

            cout<<b[i];
        }
        cout<<endl;
    }
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


