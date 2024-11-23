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
    int n,k; cin>>n>>k;


    if(k<=n)cout<<(k>0)<<endl;
    else{

        k-=n;
        int ans=1;

        int c=n-1;

        while(k>0){
            k-=c;
            ans++;

            if(k<=0)break;

            k-=c;
            ans++;
            if(k<=0)break;
            c--;
        }

        cout<<ans<<endl;

    }


}


 
int main() {
    int t;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
