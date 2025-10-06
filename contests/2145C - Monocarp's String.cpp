#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1e9+7
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
 need to find the smallest substring,
    that makes cnta==cntb

*/

void mine(){

    int n; cin>>n;

    string s; cin>>s;

    // cout<<s<<endl;

    int cnta=0;
    int cntb=0;

    forl(i,n){
        if(s[i]=='a')cnta++;
        else cntb++;
    }

    if(cnta==cntb){
        cout<<0<<endl;
        return;
    }

    int diff=cnta-cntb;

    int mn=INT_MAX;

    map<int,int>check;

    if(diff>0){

        check[0]=-1;

        int diffNow=0;


        forl(i,n){

            if(s[i]=='a')diffNow++;
            else diffNow--;

            // cout<<diffNow<<endl;

            if(check.count(diffNow-diff)){
                mn=min(mn,i-check[diffNow-diff]);
            }
            check[diffNow]=i;

        }

    }else{

        diff=abs(diff);

        check[0]=-1;

        int diffNow=0;


        forl(i,n){

            if(s[i]=='b')diffNow++;
            else diffNow--;

            // cout<<diffNow<<endl;

            if(check.count(diffNow-diff)){
                mn=min(mn,i-check[diffNow-diff]);
            }
            check[diffNow]=i;

        }


    }

    if(mn==n)cout<<-1<<endl;
    else cout<<mn<<endl;



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

