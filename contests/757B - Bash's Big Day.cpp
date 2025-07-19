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
#define ll long long int
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

 
void mine(){
    
    int n; cin>>n;

    int arr[100000+6];
    memset(arr,0,sizeof(arr));
    
    vector<int>v(n+1);

    forl(i,n){
        cin>>v[i];

        arr[v[i]]++;

        for(ll j=2; j*j<=v[i]; j++){
            if(v[i]%j==0){
                if(j*j==v[i])arr[j]++;
                else{
                    arr[j]++;
                    if(v[i]/j!=1) arr[v[i]/j]++;
                }
            }
        }

    }


    sort(arr+2, arr+100006);

    cout<<max(arr[100000+5],1)<<endl;

}
 
int main() {
    fast;
    int t = 1; 
    // cin>>t;
    // int c=1;
    while (t--) {

        // cout<<"Case "<<c<<":"<<endl; c++;
        mine();
    }
    return 0;
}
