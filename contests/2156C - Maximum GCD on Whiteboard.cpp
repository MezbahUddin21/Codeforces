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
    given k and n

    a1 a2 a3 a4

    erase: chosse and integer and erase it 
        max k times

    split: choose a integer x>=3 
            split into 3 positive int
            erase x 
            write x1 and x3
    
    the beauty of a collection of intergers b is difined as the gcd of all the element in b

    need to find the max gcd

*/

void mine(){

    ll n,k; cin>>n>>k;

    vector<ll>v(n);

    vector<ll>cnt(n+1,0);
    vector<ll>preCnt(n+1,0);


    forl(i,n){
        cin>>v[i];
        cnt[v[i]]++;

        
    }

    for1(i,n){

        preCnt[i]=preCnt[i-1]+cnt[i];
        
    }


    ll total=accumulate(cnt.begin(),cnt.end(),0LL);



    ll carry=0;

    for(ll i=n; i>=1; i--){

        ll g=0;

        ll cnnt=0;
        ll ccnt=0;

        if(i*4<=n){
            ccnt=preCnt[n]-preCnt[4*i-1];
        }
        

        for(ll j=1; j<=3; j++){

            if(i*j<=n){
                cnnt+=cnt[i*j];
            }else{
                break;
            }

        }

        ccnt+=cnnt;

        if(total-ccnt<=k){
            cout<<i<<endl;
            return;
        }
        

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
