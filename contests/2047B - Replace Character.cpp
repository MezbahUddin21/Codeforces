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
#define fast {ios_base::sync_with_stdio(false); cin.tie(0);}


int cnt[26];

void mine(){
    int n; cin>>n;

    string s; cin>>s;

    for(auto c:s)cnt[c-'a']++;


    char a = max_element(cnt,cnt + 26) - cnt + 'a';
    char b = a;

    for(int i=0; i<26; i++){
        if(cnt[i] and i!=a and (cnt[i]<cnt[b-'a'] || b==a) ){
            b=i+'a';
        }
    }

    for(auto &c:s){
        if(c==b){
            c=a;
            break;
        }
    }


    cout<<s<<endl;

	memset(cnt, 0, sizeof(cnt));

}



 
int main() {
    fast
    int t=1;
    cin>>t;
   
    while(t--){
        mine();
    }
    return 0;
}


