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

    int n; cin>>n;

    vector<int>v(n);

    forl(i,n)cin>>v[i];


    vector<int>l(n),r(n);

    forl(i,n)cin>>l[i]>>r[i];

    int hgt=0;
    vector<int>last;

    forl(i,n){

        if(v[i]==-1){
            last.pb(i);
        }else{
            hgt+=v[i];
        }

        while(hgt<l[i]){
            if(last.empty()){
                cout<<-1<<endl;
                return;
            }

            v[last.back()]=1;
            last.pop_back();
            hgt++;
            
        }


        while(hgt+last.size()>r[i]){
            if(last.empty()){
                cout<<-1<<endl;
                return;
            }

            v[last.back()]=0;
            last.pop_back();
        }

    }

    forl(i,n){
        cout<<max(0,v[i])<<space;
    }cout<<endl;
    
}



 
signed main() {
    int t=1;

    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}


