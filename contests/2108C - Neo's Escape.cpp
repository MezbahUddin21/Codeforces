#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"YES ";
#define pno cout<<"NO "<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

bool sorta(const pair<ll, ll>& a, const pair<ll, ll>& b) { return (a.first > b.first); }


void mine() {
    int n; cin>>n;

    vector<int>v(n);
    vector<pair<int,int>>sv(n);
    vector<bool>see(n+2,0);


    forl(i,n){
        cin>>v[i];
    }
    

    forl(i,n){
        sv[i].first=v[i];
        sv[i].second=i+1; 
    }

    // reverse(sv.begin(),sv.end());

    sort(sv.begin(),sv.end(),sorta);

    // forl(i,n)cout<<sv[i].first<<space<<sv[i].second<<endl;



    int cnt=0;
    int i=0;

    while(i<n){

        ll w = sv[i].first;

        vector<int>cv;

        int j=i;
        while(j<n and sv[j].first==w){
            cv.pb(sv[j].second);
            j++;
        }


        sort all(cv); 

        int sz=cv.size();
        // cout<<"cv: ";
        // for(auto it:cv)cout<<it<<space;
        // cout<<endl;

        int k=0;

        while(k<sz){
            int l=cv[k]; 
            int r=l;

            while(k+1<sz and cv[k+1]==r+1){
                k++;
                r=cv[k];
            }

            // cout<<"lr: "<<l<<space<<r<<endl;

            if(!see[l-1] and !see[r+1])cnt++;
            k++;
        }

        for(auto i:cv)see[i]=true;

        i=j;



    }

    cout<<cnt<<endl;
    
}

int main() {
    fast;
    int t = 1;
    cin>>t;
    while (t--) {
        mine();
    }
    return 0;
}
