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
    
    string s; cin>>s;

    int n=s.size();
    

    for(int i=0; i<n; i++){
        int ind=i;
        char mx=s[i];
        int l=i;
        for(int j=i; j<=min(i+10,n); j++){
            if(s[j]-(j-i)>mx){
                mx=s[j]-(j-i);
                l=j;
            }
        }

        while(ind<l){
            swap(s[l],s[l-1]);
            l--;
        }

        s[i]=mx;
    }

    cout<<s<<endl;

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


