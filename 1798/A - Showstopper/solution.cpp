#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int result=1;
        int arr1[n], arr2[n];
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        for(int i=0; i<n; i++){
            cin>>arr2[i];
        }
        for(int i=0; i<n-1; i++){
            if((arr1[i]<=arr1[n-1] && arr2[i]<=arr2[n-1]) || (arr1[i]<=arr2[n-1] && arr2[i]<=arr1[n-1])){
                continue;
            }else{
                result=0;
                break;
            }
        }
 
        if(result==1){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
 
    }
    
    return 0;
}