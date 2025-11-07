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

/*


*/

vector<char>c(27);

void mine(){

    int n,k; cin>>n>>k;

    if(n<=k){
        for1(i,n)cout<<c[i];
        cout<<endl;
        return;
    }

    int m=200000+10;

    string s;

    int i=1;
    bool f=0;
    while(i<=k+1){

        if(i==k+1)i=1;

        for(int j=i; j<=k; j++){

            if(m>=2){
            if(c[i]==c[j]){
                s+=c[i];
                m--;
                
            }else{
                s+=c[i]; s+=c[j];
                m-=2;
            }
            }
            if(m==0){
                f=1;
                break;
            }

            if(m==1){
                s+=c[i];
                f=1;
                break;
            }
        }
        i++;

        if(f)break;

    }



    forl(i,n)cout<<s[i];
    cout<<endl;


}

int main() {
    fast;

    char ch='a';

    for1(i,26){
        c[i]=i-1+ch;
        // cout<<c[i]<<space;
    }

    ll t = 1;
    // cin>>t;
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
