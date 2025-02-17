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

    string s; cin>>s;

    int n=s.size();

    vector<vector<int>>cnt(n,vector<int>(3));

    int a=-1,b=-1;
    int c=-1;

    forl(i,n){
        if(s[i]=='1')a=i;
        else if(s[i]=='2')b=i;
        else if(s[i]=='3')c=i;

        cnt[i][0]=a;
        cnt[i][1]=b;
        cnt[i][2]=c;
    }

    int ans=INT_MAX;


    bool f=0;

    forl(i,n){
        if(cnt[i][0]!=-1 and cnt[i][1]!=-1 and cnt[i][2]!=-1){

            f=1;

            int dif=max(abs(cnt[i][0]-cnt[i][1])+1,max(abs(cnt[i][0]-cnt[i][2])+1,abs(cnt[i][1]-cnt[i][2])+1));

            ans=min(ans,dif);
        }
    }

    if(!f)cout<<0<<endl;

    else cout<<ans<<endl;


}

int main()
{
    int t=1; 
    cin>>t;
    
    while(t--){
        mine();
    }

    return 0;
}
