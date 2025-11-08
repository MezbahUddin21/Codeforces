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

class MoAlgorithm {
public:
    static ll sqrtN;
    ll n, q, curAns;
    vector<ll> a, ans;
    vector<ll> freq;
    struct Query {
        ll l, r, idx;
        bool operator<(const Query &other) const {
            if (l / sqrtN != other.l / sqrtN)
                return l / sqrtN < other.l / sqrtN;
            return ((l / sqrtN) & 1) ? r > other.r : r < other.r;
        }
    };

    vector<Query> queries;

    void add(ll pos) {
        curAns-=pow(freq[a[pos]],2)*a[pos];
        freq[a[pos]]++;
        curAns+=pow(freq[a[pos]],2)*a[pos];
    }

    void remove(ll pos) {
        curAns-=pow(freq[a[pos]],2)*a[pos];
        freq[a[pos]]--;
        curAns+=pow(freq[a[pos]],2)*a[pos];
    }

    MoAlgorithm(const vector<ll> &input, ll query_count) {
        a = input;
        n = a.size();
        q = query_count;
        sqrtN = sqrt(n) + 1;
        freq.assign(10000000, 0);
        ans.assign(q, 0);
    }

    void addQuery(ll l, ll r, ll idx) {
        queries.push_back({l, r, idx});
    }

    vector<ll> process() {
        sort(queries.begin(), queries.end());

        ll currL = 0, currR = -1;
        curAns = 0;
        for (auto &query : queries) {
            while (currL > query.l) add(--currL);
            while (currR < query.r) add(++currR);
            while (currL < query.l) remove(currL++);
            while (currR > query.r) remove(currR--);
            ans[query.idx] = curAns;
        }

        return ans;
    }
};ll MoAlgorithm::sqrtN;

void mine(){

    ll n; cin>>n;
    ll q; cin>>q;

    vector<ll>v(n);

    forl(i,n)cin>>v[i];


    MoAlgorithm mo(v,q);

    forl(i,q){

        ll l,r; cin>>l>>r;
        l--,r--;
        mo.addQuery(l,r,i);

    }

    vector<ll>ans=mo.process();

    forl(i,q)cout<<ans[i]<<endl;




}

int main() {
    fast;
    ll t = 1;
    // cin>>t;
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
