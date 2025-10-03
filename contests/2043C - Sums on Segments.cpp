#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define mod 1e9+7
#define pb push_back
#define all(v) (v.begin(), v.end())
#define allr(v) (v.begin(), v.end(),greater<>())
#define pyes cout<<"yes"<<"\n";
#define pno cout<<"no"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
#define mem(a,b) memset(a, b, sizeof(a) )
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

/*
 


*/

void mine(){

    int n; cin>>n;

    vector<int>v(n);

    int mx=-2;
    int ind=0;

    forl(i,n){
        cin>>v[i];

        if(v[i]!=1 and v[i]!=-1)ind=i;
    }


    // cout<<v[ind]<<endl;

    int mnl=INT_MAX;
    int mxl=-INT_MAX;


    int mnr=INT_MAX;
    int mxr=-INT_MAX;
    
    int mnWhole=INT_MAX;
    int mxWhole=-INT_MAX;


    if(v[ind]==-1 or v[ind]==1)ind=n-1;

    int maxEnd=0;
    int minEnd=INT_MAX;

    for(int i=0; i<ind; i++){


        if(minEnd>0)minEnd=v[i];
        else minEnd=minEnd+v[i];
        mnl=min(mnl,minEnd);

        maxEnd=max(maxEnd+v[i],v[i]);
        mxl=max(mxl,maxEnd);



        // int cur=0;
        // for(int j=i; j<ind; j++){
        //     cur+=v[j];

        //     mnl=min(mnl,cur);
        //     // mxl=max(mxl, cur);
        // }

    }

    maxEnd=0;
    minEnd=INT_MAX;

    for(int i=ind+1; i<n; i++){


        if(minEnd>0)minEnd=v[i];
        else minEnd=minEnd+v[i];
        mnr=min(mnr,minEnd);

        maxEnd=max(maxEnd+v[i],v[i]);
        mxr=max(mxr,maxEnd);

    }

    maxEnd=0;
    minEnd=INT_MAX;

    int ln=-1,rn=-1;
    int lm=0,rm=0;

    
    

    int leftmn=0, leftmx=0;
    int sum=0;
    if(ind-1>=0)for(int i=ind-1; i>=0; i--){
        sum+=v[i];
        leftmn=min(leftmn,sum);
        leftmx=max(leftmx,sum);
    }
    
    sum=0;
    int rightmn=0,rightmx=0;
    if(ind+1<n)for(int i=ind+1; i<n; i++){
        sum+=v[i];
        rightmn=min(rightmn,sum);
        rightmx=max(rightmx,sum);
    }

    int mnWithInd=leftmn+rightmn+v[ind];
    int mxWithInd=leftmx+rightmx+v[ind];

    // cout<<mnWithInd<<space<<mxWithInd<<endl;



    set<int>st;

    st.insert(0);

    for(int i=mnl; i<=mxl; i++)st.insert(i);
    for(int i=mnr; i<=mxr; i++)st.insert(i);

    // cout<<v[ind]<<endl;

    for(int i=mnWithInd; i<=mxWithInd; i++)st.insert(i);

    

    cout<<st.size()<<endl;

    for(auto it:st)cout<<it<<space;

    cout<<endl;






}

int main() {
    fast;
    ll t = 1;
    cin>>t;
    // ll c=1;
    while (t--) {
        // cout<<"Case "<<c<<": "; c++;
        mine();
    }
    return 0;
}
