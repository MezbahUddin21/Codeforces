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

    int n,k; cin>>n>>k;

    string s; cin>>s;

    vector<int>subs(n+1,0);

    int nof1=0;

    forl(i,n){

        if(s[i]=='1')nof1++;
    }


    for1(i,n){
        if(s[i-1]=='1')subs[i]=subs[i-1]+1;
        else subs[i]=subs[i-1];
    }


    if(nof1<=k){
        cout<<"Alice"<<endl;
        return;
    }else if(n>=k+k and nof1>=1){
        cout<<"Bob"<<endl;
        return;
    }


    for(int i=0; i<=n-k; i++){
        int fork=subs[i+k]-subs[i];
        int others=nof1-fork;

        if(others<k+1){
            cout<<"Alice"<<endl;
            return;
        }
    }

    cout<<"Bob"<<endl;



    


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
