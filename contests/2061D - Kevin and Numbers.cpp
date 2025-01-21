#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"Yes"<<"\n";
#define pno cout<<"No"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)



void mine() {
    int n,m; cin>>n>>m;

    vector<int>a(n);
    vector<int>b(m);

    map<int,int>ma,mb;

    set<int>sa,sb;

    forl(i,n){
        cin>>a[i];
        ma[a[i]]++;
        sa.insert(a[i]);
    }
    forl(i,m){
        cin>>b[i];
        mb[b[i]]++;
        sb.insert(b[i]);
    }


    while(1){
        if(sa.empty() and sb.empty()){
            pyes
            return;
        }

        if(sa.empty() || sb.empty()){
            pno
            return;
        }

        int mxa=*sa.rbegin();
        int mxb=*sb.rbegin();

        if(mxa>mxb){
            pno
            return;
        }

        if(ma[mxb]){
            int mn=min(ma[mxb], mb[mxb]);

            ma[mxb]-=mn;
            mb[mxb]-=mn;

            if(ma[mxb]==0)sa.erase(mxb);
            if(mb[mxb]==0)sb.erase(mxb);

        }else{
            int l=mxb/2;
            int r=(mxb+1)/2;

            mb[l]+=mb[mxb];
            mb[r]+=mb[mxb];

            mb[mxb]=0;

            sb.erase(mxb);

            sb.insert(l);
            sb.insert(r);
        }

    }




    

    

}

 
signed main() {
    fast;
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
