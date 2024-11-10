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

    s="####"+s;
    s=s+"####";

    int n=s.size();

    int cnt=0;

    for(int i=0; i<n-3; i++){
        if(s[i]=='1' and s[i+1]=='1' and s[i+2]=='0' and s[i+3]=='0'){
            cnt++;
        }
    }

    int q; cin>>q;

    while(q--){
        int l; char v; cin>>l>>v;
        l+=3;

        for(int i=l-3; i<=l; i++){
            if(s[i]=='1' and s[i+1]=='1' and s[i+2]=='0' and s[i+3]=='0'){
                cnt--;
            }
        }
        
        s[l]=v;

        for(int i=l-3; i<=l; i++){
            if(s[i]=='1' and s[i+1]=='1' and s[i+2]=='0' and s[i+3]=='0'){
                cnt++;
            }
        }

        if(cnt>0)pyes
        else pno

    }
}




 
signed main() {
    ios::sync_with_stdio(0),cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;

//    int c=1;
    while(t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}


