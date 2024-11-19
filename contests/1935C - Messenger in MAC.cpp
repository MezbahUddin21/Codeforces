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


void printt(vector<int> v){
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}

bool sorta(const pair<ll,ll>&a, const pair<ll,ll>&b){return (a.second<b.second);}
bool sortd(const pair<ll,ll>&a, const pair<ll,ll>&b){return (a.second>b.second);};


void mine(){
    int n,l; cin>>n>>l;

    vector<pair<int,int>>v(n);

    forl(i,n){
        cin>>v[i].first;
        cin>>v[i].second;
    }

    sort (v.begin(),v.end(),sorta);

    int ans=0;

    for(int i=0; i<n; i++){

        priority_queue<int>pq;
        int sum=0;

        for(int j=i; j<n; j++){

            pq.push(v[j].first);
            sum+=v[j].first;

            while(!pq.empty() and sum+v[j].second-v[i].second>l){
                sum-=pq.top();
                pq.pop();
            }

            ans=max(ans,(int)pq.size());
        }
    }

    cout<<ans<<endl;

    
}
 



 
signed main() {
    ios::sync_with_stdio(0),cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;

//    int c=1;
    while(t--){
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}

