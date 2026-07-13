#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>v(n);
        vector<int>v1(n);
        for(int i=0; i<n; i++){
            cin>>v[i].first;
            v[i].second=i;
        }
        sort(v.begin(), v.end());
        
        for(int i=0; i<n; i++){
            v1[v[i].second]=n-i;
        }
        for(int i=0; i<n; i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
 
 
 