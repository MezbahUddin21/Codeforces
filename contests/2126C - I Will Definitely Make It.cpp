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


void mine(){

    ll n,k; cin>>n>>k;
    k--;

    vector<ll>v(n);
    vector<ll>vc(n);

    forl(i,n){
        cin>>v[i];
        vc[i]=v[i];
    }

    ll mn=*min_element(v.begin(), v.end());


    int mxInd=0;
    int mx=0;

    forl(i,n){
        if(v[i]>mx){
            mx=v[i];
            mxInd=i;
        }
    }
    int time=0;
    int water=1;

    if(mx==v[k]){
        pyes
        return;
    }

    sort all(vc);

    forl(i,n){

        if(vc[i]==v[k]){

            for(int j=i; j<n-1; j++){
                if(vc[j+1]-vc[j]>v[k]){
                    pno
                    return;
                }
            }

            break;

        }

    }

    pyes
    
}



signed main() {
    ios::sync_with_stdio(0),cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;

// int c=1;
    while(t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}


