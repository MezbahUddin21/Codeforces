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
    int n; cin>>n;

    string S; cin>>S;

    vector<string> strings = {""};
 
    while (1) {
        vector<string> nstrings;
 
        for (auto &str : strings)
            for (int c = 0; c < 26; c++) {
                string nstr = str + char('a' + c);
                nstrings.push_back(nstr);
 
                if (S.find(nstr) == string::npos){
                    cout<<nstr<<endl;
                    return;
                }
                    
            }
 
        strings.swap(nstrings);
    }

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
