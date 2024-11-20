#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   ll t;
   string s;
   cin>>t;
   while(t--){
       cin>>s;
       int n = s.size();
       char num='0';
       for(int i=0; i<n; i++){
           if(s[i]=='?'){
              s[i]=num; 
           }else{
               num=s[i];
           }
       }
       cout<<s<<endl;
   }

    return 0;
}
