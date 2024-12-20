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
    int n; cin>>n;
    string a; cin>>a;

    int s=0,p=0;
    // int s1=0,p1=0;
    int inp=0,ins=0;

    // int inpp=0;

    for(int i=0; i<n; i++){

        if(a[i]=='s' and i==0)continue;

        // if(a[i]=='s')s1++;
        // if(a[i]=='p')p1++;
        
        if(a[i]=='p' and p==0){
            p=1;
            inp=i+1;
        }

        if(a[i]=='s' and p==1){
            pno
            return;
        }

        if(a[i]=='s' and s==0){
            s=1;
            ins=i+1;
        }

        if(s==1 and p==1){
            if(inp<n){
                pno
                return;
            }
        }


    }

    pyes

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


