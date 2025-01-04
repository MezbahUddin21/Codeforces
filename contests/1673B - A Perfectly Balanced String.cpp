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


void mine(){
    string s; cin>>s;

    int n=s.size();

    set<char>st;


    forl(i,n){
        st.insert(s[i]);
    }

    int arr[26];

    memset(arr,-1,sizeof(arr));

    int mn=INT_MAX;

    forl(i,n){
        if(arr[s[i]-'a']!=-1){
            mn=min(mn,(i-arr[s[i]-'a']-1));
            arr[s[i]-'a']=i;
        }else{
            arr[s[i]-'a']=i;
        }
    }


    if(mn<n and mn+1<st.size())pno
    else pyes


    

}


 
int main() {
    fast;
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}
