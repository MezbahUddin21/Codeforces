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


void mine(){
    int n; cin>>n;

    vector<int>v(n);
    set<int>c;

    forl(i,n){
        cin>>v[i];
        c.insert(v[i]);
    }

    int mex=0;

    int i=0;
    for(auto it:c){
        if(i==it){
            mex=it+1;
        }else break;

        i++;
    }


    set<int>s;
    int cnt=1;
    int h=0;

    forl(i,n){
        if(v[i]<mex)s.insert(v[i]);
        if(s.size()==mex){
            h=i+1;
            break;
        }
    }

    s.clear();

    for(int i=h; i<n; i++){
        if(v[i]<mex)s.insert(v[i]);
        if(s.size()==mex){
            cnt++;
            break;
        }
    }

    if(cnt>1){
        cout<<2<<endl;
        cout<<1<<space<<h<<endl;
        cout<<h+1<<space<<n<<endl;
    }else cout<<-1<<endl;

    
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

