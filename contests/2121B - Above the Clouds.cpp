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
 
 
 
 
void mine(){

    int n; cin>>n;
    string s; cin>>s;

    
    map<char,int>mp;
    
    for(int i=1; i<n-1; i++){
        mp[s[i]]++;
        
        if(s[i]==s[i+1] or mp[s[i]]>=2 or s[i]==s[i-1]){
            pyes
            return;
        }
        
    }
    
    if(s[0]==s[n-1] ){
        
        mp[s[0]]++;
        mp[s[n-1]]++;
        
        if(mp[s[0]]>=3){
            pyes
            return;
            
        }
    }else{
        mp[s[0]]++;
        mp[s[n-1]]++;
        if(mp[s[0]]>=2 or mp[s[n-1]]>=2){
            pyes
            return;
        }
    }
    
    
 
    pno
}
 
int main() {
    fast;
    int t = 1; cin>>t;
    int c=1;
    while (t--) {

        // cout<<"Case "<<c<<":"<<endl; c++;
        mine();
    }
    return 0;
}
