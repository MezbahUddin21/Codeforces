#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) (v.begin()a, v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"YES"<<"\n";
#define pno cout<<"NO"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
 

const ll mx=1e9;
 
 
void mine(){

    string s; cin>>s;

    int n=s.size();


    vector<pair<string,pair<int,int>>>v;

    forl(i,n){
        if(s[i]=='0'){
            int len=n-i;
            for(int l=0; l<i; l++){
                if(s[l]=='1'){
                    int a=i;
                    int b=l;
                    int lll=len;
                    string f="";
                    while(lll--){
                        if(s[a]!=s[b]){
                            f+='1';
                        }
                        a++;
                        b++;
                        f+='0';
                    }

                    v.pb({f,{l,l+len-1}});
                }
            }

            break;
        }
    }

    if(v.size()==0){
        cout<<1<<space<<n<<space<<1<<space<<1<<endl;
        return;
    }

    sort allr(v);

    cout<<1<<space<<n<<space;

    cout<<v[0].second.first+1<<space<<v[0].second.second+1<<endl;

}
 
 
 
 
signed main() {
    int t=1;
 
    cin>>t;
 
   
    while(t--){
        mine();
    }
    return 0;
}
