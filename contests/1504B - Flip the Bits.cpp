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
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


void mine(){

    int n; cin>>n;

    string s1,s2; cin>>s1>>s2;

    vector<int>m(n);

    int c1=0,c0=0;

    forl(i,n){
        if(s1[i]=='0')c0++;
        else c1++;

        if(c0==c1)m[i]=1;
    }

    for(int i=n-1; i>=0; i--){
        if(m[i]){
            if(s1[i]!=s2[i]){
                int j=i;

                for(; j>=0; j--){
                    if(i!=j and m[j])break;
                    if(s1[j]=='1')s1[j]='0';
                    else s1[j]='1';
                }

                i=j+1;
            }
        }
    }

    if(s1==s2)pyes
    else pno
    
}


 
int main() {
    fast;
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
