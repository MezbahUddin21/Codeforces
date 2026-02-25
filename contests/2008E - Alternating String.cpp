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

void mine(){

    ll n; cin>>n;

    string s; cin>>s;

    if(n%2==0){

        vector<ll>odd(26);
        vector<ll>even(26);

        forl(i,n){
            if(i%2){
                even[s[i]-'a']++;
            }else{
                odd[s[i]-'a']++;
            }
        }

        sort allr(even);
        sort allr(odd);

        cout<<n-(even[0]+odd[0])<<endl;


    }
    else{
        vector<ll>preodd(26,0);
        vector<ll>preeven(26,0);

        vector<ll>sufodd(26,0);
        vector<ll>sufeven(26,0);

        ll ans=n;

        // cout<<s<<endl;

        for(ll i=n-1; i>=0; i--){
            if(i%2){
                sufeven[s[i]-'a']++;
            }else{
                sufodd[s[i]-'a']++;
            }
        }

        
        for(ll i=0; i<n; i++){
            if(i%2)sufeven[s[i]-'a']--;
            else sufodd[s[i]-'a']--;

            // cout<<sufeven[3]<<space;

            ll premx=n;

            ll now=0;

            forl(j,26){
                now=max(now,preodd[j]+sufeven[j]);

            }

            premx-=now;

            now=0;

            forl(k,26){
                now=max(now,preeven[k]+sufodd[k]);

            }
            premx-=now;

            ans=min(ans,premx);

            if(i%2)preeven[s[i]-'a']++;
            else preodd[s[i]-'a']++;

        }

        // cout<<endl;


        cout<<ans<<endl;
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
