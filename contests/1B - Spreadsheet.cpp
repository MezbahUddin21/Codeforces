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

string alf="_ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 
void mine(){

    string s; cin>>s;
    int n=s.size();

    int r,c;

    int cnt=0;
    bool f=0;

    forl(i,n-1){
        if(s[i]>='A' and s[i]<='Z' and s[i+1]>='0' and s[i+1]<='9'){
            cnt++;
        }
        if(cnt==2){
            f=1;
            break;
        }
    }

    if(f){
        
        string x="",y="";
        int i=1;
        for(; i<n; i++){
            if(s[i]>='0' and s[i]<='9')x+=s[i];
            else break;
        }
        i++;

        for(; i<n; i++){
            if(s[i]>='0' and s[i]<='9')y+=s[i];
            else break;
        }
        // cout<<x<<space<<y<<endl;

        int a=stoi(x);
        int b=stoi(y);

        // cout<<a<<space<<b<<endl;
        y="";
        while(b){
            
            int ind;
            if(b%26==0)ind=26;
            else ind=b%26;

            y=alf[ind]+y;
            b-=y[0]-'A'+1;
            b/=26;
        }

        cout<<y<<a<<endl;

    }else {

        string x="",y=""; 
        for(auto i:s){
            if(i>='0' and i<='9')y+=i;
            else x+=i;
        }
        int a=0;

        int base=1;
        for(int i=x.size()-1; i>=0; i--){
            a+=(x[i]-'A'+1)*(base);
            base*=26;
        }

        cout<<"R"<<y<<"C"<<a<<endl;

        // cout<<x<<space<<y<<endl;


    }

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
