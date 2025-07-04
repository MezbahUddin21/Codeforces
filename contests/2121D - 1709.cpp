#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 998244353
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

    int n; cin>>n;

    vector<int>a(n);
    vector<int>b(n);

    forl(i,n)cin>>a[i];
    forl(i,n)cin>>b[i];

    int op=0;

    vector<pair<int,int>>ans;

    forl(i,n){
        for(int j=1; j<n; j++){
            if(a[j-1]>a[j]){
                swap(a[j-1],a[j]);
                ans.pb({1,j});
                op++;
            }
        }
    }

    forl(i,n){
        for(int j=1; j<n; j++){
            if(b[j-1]>b[j]){
                swap(b[j-1],b[j]);
                ans.pb({2,j});
                op++;
            }
        }
    }

    forl(i,n){

        if(a[i]>b[i]){
            swap(a[i],b[i]);
            op++;
            ans.pb({3,i+1});
        }
    }

    cout<<op<<endl;
    for(auto it:ans){
        cout<<it.first<<space<<it.second<<endl;
    }


}

int main()
{
    int t=1; 
    cin>>t;
    // int c=1;
    while(t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }

    return 0;
}
