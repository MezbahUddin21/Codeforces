#include<bits/stdc++.h>
using namespace std;



void mine(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a+1!=c){
        cout<<-1<<endl;
    }else if(a+b+c==1){
        cout<<0<<endl;
    }else{

        multiset<int>s;

        for(int i=0; i<c; i++)s.insert(0);

        for(int i=0; i<b; i++){
            auto it=s.begin();
            s.insert(*it+1);

            s.erase(s.begin());
        }


        for(int i=0; i<a; i++){
            s.erase(s.begin());
            auto it=s.begin();

            s.insert(*it+1);

            s.erase(s.begin());

        }

        cout<<*s.begin()<<endl;
    }
}

signed main(){

    int t=1;

    cin>>t;

    while(t--){
        mine();
    }

    return 0;

}
