#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"yes"<<"\n";
#define pno cout<<"no"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)



void mine(){

    string s; cin>>s;

    int n=s.size();

    if(s[n-1]=='L' or s[n-1]=='R'){
        int a;
        if(n==3)a=(s[0]-'0')*10+(s[1]-'0');
        else if(n==2)a=(s[0]-'0');

        else if(n==4){
            a=(s[0]-'0')*10+(s[1]-'0');
            a*=10;
            a+=(s[2]-'0');
        }

        
        if(s[n-1]=='R'){
            if(a==0)cout<<"New moon";
            else if(a==100)cout<<"Full moon";
            else if(a<50)cout<<"Waxing crescent";
            else if(a==50)cout<<"First quarter";
            else if(a>50)cout<<"Waxing gibbous";
        }else if(s[n-1]=='L'){
            if(a==0)cout<<"Full moon";
            else if(a==100)cout<<"New moon";
            else if(a<50)cout<<"Waning crescent";
            else if(a==50)cout<<"Third quarter";
            else if(a>50)cout<<"Waning gibbous";
        }

    }else{
        if(n==1)cout<<"New moon";
        else if(n==3)cout<<"Full moon";
    }

}

int main()
{
    int t=1; 
    // cin>>t;
    
    // int c=1;
    
    while(t--){
        
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }

    return 0;
}
