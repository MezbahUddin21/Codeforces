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
    the maze is n*n
    that points in one 4 derections 
    
    if he stands on an arrow,
        he will be forced to follow the arrows form that cell

        each arrow moves 1 cell in the direction

    

*/

int n;

valid(int i, int j){

    if(i>=0 and i<n){
        if(j>=0 and j<n){
            return true;
        }
    }


    return false;

}

void mine(){

    int k; cin>>n>>k;

    int m=n;


    int check=n*n-k;
    int sq=sqrt(check);

    // if(check%2 and sq*sq!=check){
    //     pno
        // return;
    // }

    if(check==1){
        pno
        return;
    }

    // cout<<check<<endl;


    vector<vector<char>>v(n, vector<char>(n));
    vector<vector<int>>fill(n, vector<int>(n));


    if(check>=2){
        v[0][0]='R';
        v[0][1]='L';
        fill[0][0]=1;
        fill[0][1]=1;
    }

    check-=2;

    // cout<<check<<endl;

    int f=0;

    forl(i,n){
        forl(j,n){

            if(i==0 and (j==0 or j==1))continue;

            if(check<=0){
                break;
                f=1;
            }


            if(valid(i-1,j) and fill[i-1][j] ){
                v[i][j]='U';
                check--;
                fill[i][j]=1;

                // cout<<check<<endl;
            }
            else if(valid(i,j-1) and fill[i][j-1]){
                v[i][j]='L';
                check--;
                fill[i][j]=1;
                // cout<<check<<endl;
            }

        }

        if(f)break;
    }

    forl(i,n){
        forl(j,n){

            if(fill[i][j]!=1){
                v[i][j]='D';
            }
        }
    }

    pyes

    forl(i,n){
        forl(j,n){

            cout<<v[i][j];
        }
        cout<<endl;
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
