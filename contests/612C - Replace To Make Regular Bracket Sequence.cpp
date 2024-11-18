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
    string s; cin>>s;
    int n=s.size();
    int cnt=0;
    

    stack<int>st;

    int f=0;

    forl(i,n){
        if(s[i]=='('){
            st.push(')');
        }
        else if(s[i]=='{'){
            st.push('}');
        }
        else if(s[i]=='['){
            st.push(']');
        }
        else if(s[i]=='<'){
            st.push('>');
        }
        else {
            if(st.empty()){
                cout<<"Impossible"<<endl;
                return;
            }else if(st.top()!=s[i])cnt++;
            st.pop();
        }
    }

    if( !st.empty()){
        cout<<"Impossible"<<endl;
    }else cout<<cnt<<endl;



}



 
signed main() {
    int t=1;

   
    while(t--){
        mine();
    }
    return 0;
}


