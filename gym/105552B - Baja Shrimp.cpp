#include <bits/stdc++.h>
using namespace std;
#define long long
/*


*/

void solve(){

    
    int n; cin>>n;

    vector<int>a(n);
    vector<int>b(n);

    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];

    int cnt=0;

    int now=0;
    int last_mismatch=0;

    for(int i=0; i<n; i++){
        now+=a[i];
        if(now<b[i]){
            cnt++;
            last_mismatch=i;
        }
        now-=b[i];
    }

    int ind=-1;
    int mx=0;

    if(last_mismatch==n-1)cout<<"No"<<endl;
    else{

        for(int i=last_mismatch+1; i<n; i++){
            if(a[i]>mx){
                mx=a[i];
                ind=i;
            }
        }
    }

    if(ind!=-1){
        int idx=-1;
        int mn=INT_MAX;
        for(int i=0; i<ind; i++){
            if(a[i]<mn){
                mn=a[i];
                idx=i;
            }
            if(a[i]<b[i])break;
        }

        if(idx!=-1 and ind!=-1){
            swap(a[idx],a[ind]);
        }
    }

    // for(int i=0; i<n; i++)cout<<a[i]<<" ";
    // cout<<endl;

    now=0;
    for(int i=0; i<n; i++){

        now+=a[i];

        if(now<b[i]){
            cout<<"No"<<endl;
            return;
        }
        now-=b[i];

    }
    cout<<"Yes"<<endl;

}

int main() {
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
