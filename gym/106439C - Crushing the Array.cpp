#include<bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){


    int n; 

    cin>>n;

    map<int,int>cnt;

    int c=0;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        c++;
        cnt[x]++;
    }

    if(c==cnt.size() and c%2==0){
        cout<<"Bob"<<endl;
    }
    else cout<<"Alice"<<endl;


    
}

int main(){



    int t; cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
