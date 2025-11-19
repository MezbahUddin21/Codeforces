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
    n cells, all cells are red

    in 1 op, choose a segment and make them blue
        before changing the choosen cells can be red and blue
        you can't paint red

    allowed to perform k operation

    the desired color after all op is red or blue




*/

bool checkP(string s, vector<ll>p, int k, ll mid){
    int n=s.size();
    string ss=s;

    forl(i,n)s[i]='R';

    ll mx=0;

    forl(i,n){
        int prev=i;
        if(k<=0)break;
        if(ss[i]=='B' and p[i]>=mid){
            for(int j=i; j<n; j++){
                if(ss[j]=='B'){
                    s[j]='B';
                }
                else if(p[j]<mid){
                    s[j]='B';
                }else{
                    i=j;
                    break;
                }
            }
        }
        if(prev!=i)k--;
    }

    forl(i,n){
        if(ss[i]!=s[i]){
            mx=max(mx,p[i]);
        }
    }

    // if(mid==5)cout<<s<<endl;

    if(mx<mid)return true;
    else return false;

}


void mine(){

    ll n; cin>>n;
    ll k; cin>>k;

    string s; cin>>s;

    vector<ll>p(n);

    forl(i,n)cin>>p[i];

    ll l=1,r=INT_MAX;

    while(l<=r){
        ll mid=(l+r)/2;

        if(checkP(s,p,k,mid)){
            r=mid-1;
            // cout<<r<<space;
        }else{
            l=mid+1;
        }

    }


    cout<<r<<endl;




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
