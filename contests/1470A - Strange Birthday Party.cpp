#include<bits/stdc++.h>

using namespace std;



void mine(){

    long long n,m; cin>>n>>m;

    vector<long long>k(n);

    for(long long i=0; i<n; i++)cin>>k[i];


    vector<long long>c(m+1);
    for(long long i=1; i<=m; i++)cin>>c[i];


    sort(k.begin(),k.end());

    long long res=0;

    for(long long i=n-1; i>=0; i--){
        res+=c[min(k[i],n-i)];
    }

    cout<<res<<endl;

}




int main(){
    int t=1;
    cin>>t;

    while(t--){
        mine();
    }

    return 0;
}
