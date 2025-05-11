    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define space " "
    #define mod 1000000007
    #define pb push_back
    #define all(v) (v.begin(), v.end())
    #define allr(v) (v.begin(), v.end(),greater<>())
    #define pyes cout<<"YES ";
    #define pno cout<<"NO "<<"\n";
    #define sortv sort(v.begin(),v.end())
    #define sortvg sort(v.begin(),v.end(),greater<>())
    #define ll long long
    #define forl(i,n) for(int i=0;i<n;i++)
    #define for1(i,n) for(int i=1;i<=n;i++)
    #define setprecision(x) cout << fixed << setprecision(x)
    #define mem(a,b) memset(a, b, sizeof(a) )
    #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
    #define lli long long int


    ll getNum(ll n, ll x , ll y){
        
        if(n==1){

            if(x==1 and y==1)return 1;
            else if(x==1 and y==2)return 4;
            else if(x==2 and y==1)return 3;
            else if(x==2 and y==2)return 2;
        }

        ll size = 1LL<<(n-1);
        ll half=size;
        ll block=half*half;

        if(x<=half and y<=half){

            return getNum(n-1,x,y);

        }else if(x>half and y>half){

            return block+getNum(n-1, x-half,y-half);

        }else if(x>half and y<=half){

            return (2*block)+getNum(n-1, x-half,y);
        }else{

            return (3*block)+getNum(n-1, x,y-half);
        }
    }

    pair<ll,ll> getCord(ll n, ll x){
        
        if(n==1){

            if(x==1)return {1,1};
            else if(x==2)return {2,2};
            else if(x==3)return {2,1};
            else return {1,2};

        }

        ll size = 1LL<<(n-1);
        ll half=size;
        ll block=half*half;

        if(x<=block){

            auto [a,b] = getCord(n-1, x);
            return {a,b};

        }else if(x<=2*block){

            auto [a,b] = getCord(n-1, x-block);
            return {a+size,b+size};

        }else if(x<=3*block){

            auto [a,b]=getCord(n-1, x-2*block);
            return {a+size,b};

        }else {

            auto [a,b]=getCord(n-1, x-3*block);
            return {a,b+size};
        }
        

    }


    void mine() {
        
        ll n,q; cin>>n>>q;

        while(q--){
            
            string s; cin>>s;

            if(s=="->"){

                ll x,y; cin>>x>>y;
                
                cout<<getNum(n,x,y)<<endl;

            }else {
                ll x; cin>>x;

                auto [a,b]=getCord(n,x);

                cout<<a<<space<<b<<endl;
            }
        }


        
    }

    int main() {
        fast;
        int t = 1;
        cin>>t;
        while (t--) {
            mine();
        }
        return 0;
    }
