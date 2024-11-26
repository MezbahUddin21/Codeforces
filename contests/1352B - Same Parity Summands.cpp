#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"


void solve(){
    int n,k; cin>>n>>k;
    if(n%k==0){
        cout<<"YES"<<endl;
        for(int i=0; i<k; i++){
            cout<<n/k<<" ";
        }
        cout<<endl;
        return;
    }
    if(n%2==0){
        if(k%2==0){
            if(k>n){
                cout<<"NO"<<endl;
                return;
            }else{
                cout<<"YES"<<endl;
                for(int i=0; i<k-1; i++){
                    cout<<1<<" ";
                }
                cout<<n-k+1<<endl;
                return;
            }
        }else if(n<2*k){
            cout<<"NO"<<endl;
            return;
        }else{
            cout<<"YES"<<endl;
            for(int i=0; i<k-1; i++){
                cout<<2<<" ";
            }
            cout<<n-2*(k-1)<<endl;
            return;
        }
    }else{
        if(k%2==0){
            cout<<"NO"<<endl;
            return;
        }else if(n<k){
            cout<<"NO"<<endl;
            return;
        }else{
            cout<<"YES"<<endl;
            for(int i=0; i<k-1; i++){
                cout<<1<<" ";
            }
            cout<<n-k+1<<endl;
            return;
        }
    }
    

}
 
int main() {
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}
