#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1e9+7
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"yes"<<"\n";
#define pno cout<<"no"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

/*
    seq a consist of 2^n pos

    decide to calculate some value v for a

    needs few iteration for v

    first writes a new a, a1 or a2, 2^(n-1)

    second, writes a new a, xor of (a1 or a2)

    third, again or 

    m queries,
        each of them, 
            


*/

ll a[200005], seg[4*200005];
 
void build (int ind, int low, int high, int turn){
    if(low==high){
        seg[ind]=a[low];
        return;
    }
    int mid=(low+high)/2;
    build(2*ind+1, low, mid, turn-1);
    build(2*ind+2, mid+1, high, turn-1);

    if(turn%2)seg[ind]=seg[2*ind+1]|seg[2*ind+2];
    else seg[ind]=seg[2*ind+1]^seg[2*ind+2];
 
}
 
void update(int ind, int low, int high, int k, int val,int turn){
    if(low==high){
        seg[ind]=val;
        return;
    }
 
    int mid=(low+high)/2;
 
    if(k<=mid)update(2*ind+1, low, mid, k, val,turn-1);
    else update(2*ind+2, mid+1, high, k, val,turn-1);
    
    if(turn%2)seg[ind]=seg[2*ind+1]|seg[2*ind+2];
    else seg[ind]=seg[2*ind+1]^seg[2*ind+2];
 
}
 
// ll query(int ind, int low, int high, int l, int r){
 
//     if(low>=l and high<=r){
//         return seg[ind];
//     }
//     if(high<l or low>r)return INT_MAX;
 
//     int mid=(low+high)/2;
//     ll left =query(2*ind+1, low, mid, l,r);
//     ll right =query(2*ind+2, mid+1, high, l,r);
 
//     return min(left,right);
 
// }
 
 
 
void mine(){
 
    int n,q; cin>>n>>q;

    int m=n;
    n=(1<<n);
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
 
    build(1,1,n,m);
    
    while(q--){
        int k; cin>>k;
        int val; cin>>val;
        update(1, 1,n, k, val, m);
        cout<<seg[1]<<endl;

        
 
    }
 

 
}



int main() {
    fast;

    ll t = 1;
    // cin>>t
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
