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

    if(n%2){
        cout<<n<<endl;
        for(int i=2; i<n-1; i++){
            if(i==3)continue;

            cout<<i<<space;
        }
        cout<<"1 3 "<<n-1<<space<<n<<endl;
        return;
    }else if(n==6){
        cout<<7<<endl;
        cout<<"1 2 4 6 5 3"<<endl;
        return;
    }
    else{
        int hs=1<<__lg(n);

        cout<<hs*2-1<<endl;
        for(int i=2; i<=n; i++){
            if(i==3 or i==hs-2 or i==hs-1 or i==hs)continue;

            cout<<i<<space;
        }
        cout<<"1 3 "<<hs-2<<space<<hs-1<<space<<hs<<endl;
        return;
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


