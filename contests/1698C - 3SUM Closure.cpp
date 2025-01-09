#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1000000007
#define pb push_back
#define all(v) (v.begin()a, v.end())
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

    map<ll,bool> mp;
 
    int pos=0,neg=0,zero=0;

    vector<int>em;
 
    forl(i,n){
        int x; cin>>x;
        mp[x]=true;
        if(x==0){
            zero++;
            if(zero<=3)em.pb(x);
        }
        else if(x<0){
            neg++;
            em.pb(x);
        }
        else if(x>0){
            pos++;
            em.pb(x);
        }
    }
 
    if(pos>2 or neg>2){
        pno
        return;
    }

 
    int ems=em.size();
 
    if(ems<3){
        pno
        return;
    }
 
 
    forl(i,ems){
        forl(j,ems){
            forl(k,ems){
                if(i!=j and j!=k and k!=i){
                    if(!mp[(em[i]+em[j]+em[k])]){
                        pno
                        return;
                    }
                }
            }
        }
    }
 
    pyes

}
 
 
 
 
signed main() {
    int t=1;
 
    cin>>t;
 
   
    while(t--){
        mine();
    }
    return 0;
}
