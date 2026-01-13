#include<bits/stdc++.h>
using namespace std;


void file(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

}



void solve(){

    int n,k; cin>>n>>k;


    int a=n;
    int nn=n;

    int cnt1=0;

    if(n==k){
        cout<<0<<endl;
        return;
    }

    bool f1=0,f2=0;

    while(n){

        a=n/2;
        n=(n+1)/2;

        cnt1++;

        if(a==k or n==k){
            f1=1;
            break;
        }

        if(n==1 and n<k){
            break;
        }
    }

    a=nn;
    int cnt2=0;

    if(nn==k){
        cout<<0<<endl;
        return;
    }

    while(nn){

        a=(nn+1)/2;
        nn=(nn)/2;

        cnt2++;

        if(a==k or nn==k){
            f2=1;
            break;
        }

        if(nn==1 and nn<k){
            break;
        }
    }

    if(f1 and f2){
        cout<<min(cnt1,cnt2)<<endl;
    }else if(f1){
        cout<<cnt1<<endl;
    }else if(f2)cout<<cnt2<<endl;
    else cout<<-1<<endl;

    


}

int main(){

    file();
    int t=1;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
