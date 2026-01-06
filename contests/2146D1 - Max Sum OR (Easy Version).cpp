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

let n=r-l+1;



*/

void mine(){

    
    int l,n; cin>>l>>n;

    int nn=n;

    vector<int>ans(n+1,0);


    auto check=[&](int x){

        if(x==0)return 0;

        for(int i=0; i<30; i++){
            if((1<<i)-1==x)return 0;
        }

        return 1;

    };

    while(nn>0){

        int bits = floor(log2(nn)) + 1;  
        int mask = (1 << bits) - 1;   
        int result = nn ^ mask;

        // cout<<result<<space;

        int next_nn=result;

        int l=0;
        
        while(check(nn) or l==0){
            l=1;

            bits = floor(log2(nn)) + 1;  
            mask = (1 << bits) - 1;   
            result = nn ^ mask;

            ans[result]=nn;
            ans[nn]=result;
            // cout<<bits<<endl;

            nn--;
        }

        if(nn==0 or next_nn==0)break;

        nn=next_nn-1;

    }

    // cout<<endl;

    ll result=0;

    forl(i,n+1)result+=(i|ans[i]);

    cout<<result<<endl;

    forl(i,n+1)cout<<ans[i]<<space;

    cout<<endl;

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
