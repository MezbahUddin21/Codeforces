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
#define lli long long int

void mine() {
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n, 0));

    int val=n*n-1;

    int top=0, right=n-1;
    int bottom=n-1, left=0;

    while(val>0){
        for(int i=left; i<=right; i++){
            v[top][i]=val;
            val--;
        } top++;
        for(int i=top; i<=bottom; i++){
            v[i][right]=val;
            val--;
        }right--;
        for(int i=right; i>=left; i--){
            v[bottom][i]=val; 
            val--;
        }bottom--;
        for(int i=bottom; i>=top; i--){
            v[i][left]=val;
            val--;
        }left++;

    }


    forl(i,n){
        forl(j,n){
            cout<<v[i][j]<<space;
        }cout<<endl;
    }

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
