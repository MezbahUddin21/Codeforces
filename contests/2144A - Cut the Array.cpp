#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1e9+7
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"yes"<<"\n";
#define pno cout<<"no"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

/*  
    cut the array into three parts 

    choose l and r

    1, 


*/

void mine(){

    
    int n; cin>>n;
    vector<int>v(n+1);

    for(int i=1; i<=n; i++){
        cin>>v[i];
  
    }

    for(int i=2; i<=n; i++){
        v[i]+=v[i-1];
  
    }


    for(int l=1; l<=n-2; l++){
        for(int r=l+1; r<n; r++){
            int s1,s2,s3;
            s1=v[l]%3;
            s2=(v[r]-v[l])%3;
            s3=(v[n]-v[r])%3;

            if(s1==s2 and s1==s3){
                cout<<l<<space<<r<<endl;
                return;
            }else if(s1!=s2 and s1!=s3 and s2!=s3){
                cout<<l<<space<<r<<endl;

                // cout<<s1<<space<<s2<<space<<s3<<endl;
                return;
            }

        }
    }

    cout<<0<<space<<0<<endl;



}

int main() {
    fast;
    ll t = 1;
    cin>>t;
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
