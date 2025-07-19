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

#define f first
#define s second

void mine(){

    int n; cin>>n;

    vector<int>p(n);
    vector<int>s(n);

    forl(i,n)cin>>p[i];
    forl(i,n)cin>>s[i];


    for(int i=1; i<n; i++){
        if(p[i-1]%p[i]!=0){
            pno
            return;
        }
    }


    for(int i=n-1; i>=1; i--){
        if(s[i]%s[i-1]!=0){
            pno
            return;
        }
    }

    int mnp=*min_element(p.begin(),p.end());
    int mns=*min_element(s.begin(),s.end());

    if(mnp!=mns){
        pno
        return;
    }

    int mn=min(mnp,mns);


    forl(i,n){
        if(__gcd(p[i],s[i])!=mn){
            pno
            return;
        }
    }
    forl(i,n-1){
        if(__gcd(p[i],s[i+1])!=mn){
            pno
            return;
        }
    }
    pyes

}



signed main() {
    ios::sync_with_stdio(0),cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;

// int c=1;
    while(t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}


