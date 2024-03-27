#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pyes cout<<"yes"<<"\n";
#define pno cout<<"no"<<"\n";
#define sortv sort(v.begin(),v.end())
#define sortvg sort(v.begin(),v.end(),greater<>())
#define ll long long
#define forl(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define setprecision(x) cout << fixed << setprecision(x)
void mezbah(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void printt(vector<int> v){
    cout<<v.size()<<endl;
    for(int i=1; i<=v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}

void seive(int n){
    vector<int>v(n+3);
    for(int i=2; i*i<=n; i++){
        if(v[i]==0){
            for(int j=i*i; j<=n; j+=i){
                v[j]=1;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(v[i]==0)cout<<i<<" ";
    }
    cout<<endl;
}

vector<ll> mPrimeFact(ll x) {
	vector<ll> fact;
	for(ll i = 2; i * i <= x; i++) {
		ll cnt = 0; 
		while(x % i == 0) {
			cnt++;
			x /= i;
			fact.push_back(i);
		}
	}
	if(x > 1) fact.push_back(x);
	return fact;
}

ll lcm(ll a,ll b){
    ll g=__gcd(a,b);
    return (a*b/g);
}



int cel(int a,float l){
    return ceil(a/l);
}
ll max_subarr(vector <ll>v){
    int n=v.size();
    ll max_sum,curr_sum;
    max_sum=curr_sum=0;
    for(int i=0; i<n; i++){
        curr_sum=max(curr_sum+v[i],v[i]);
        max_sum=max(max_sum, curr_sum);
    }   
    return max_sum;
}

void mine(){
    int n; cin>>n;
    int a[n+1];
    priority_queue<pair<int,int>>q;

    q.push({n,-1});
    int cnt=1;

    while(!q.empty()){
        int l=q.top().second*-1;
        int len=q.top().first;
        q.pop();

        int r=l+len-1;

        int mid;

        if(len%2)mid=(l+r)/2;
        else mid = (l+r-1)/2;

        a[mid]=cnt; cnt++;

        int l1,l2,r1,r2;
        l1=l;r1=mid-1;
        l2=mid+1;r2=r;

        if(l1<=r1){
            q.push({r1-l1+1,-l1});
        }
        if(l2<=r2){
            q.push({r2-l2+1,-l2});
        }
    }
    for1(i,n)cout<<a[i]<<" ";
    cout<<endl;

}
 
int main() {
    mezbah();
    int t;
    cin>>t;
    
    while(t--){
        mine();
    }
    return 0;
}


 

















// #include <iostream>
// #include <string>

// using namespace std;

// string data, div, temp, total;
// int i, j, datalen, divlen, len, flag = 1;

// void check();

// int main()
// {
//     cout << "Enter the total bit of data: ";
//     cin >> datalen;
//     cout << "Enter the total bit of divisor: ";
//     cin >> divlen;
//     len = datalen + divlen - 1;
//     cout << "Enter the data: ";
//     cin >> data;
//     cout << "Enter the divisor: ";
//     cin >> div;

//     for (i = 0; i < datalen; i++)
//     {
//         total[i] = data[i];
//         temp[i] = data[i];
//     }

//     for (i = datalen; i < len; i++)
//         total[i] = '0';

//     check();

//     for (i = 0; i < divlen; i++)
//         temp[i + datalen] = data[i];

//     cout << "Transmitted Code Word: " << temp << endl;

//     cout << "Enter the received codeword: ";
//     cin >> total;

//     check();

//     for (i = 0; i < divlen - 1; i++)
//     {
//         if (data[i] == '1')
//         {
//             flag = 0;
//             break;
//         }
//     }

//     if (flag == 1)
//         cout << "Successful!!" << endl;
//     else
//         cout << "Received codeword contains errors..." << endl;

//     return 0;
// }

// void check()
// {
//     for (j = 0; j < divlen; j++)
//         data[j] = total[j];

//     while (j <= len)
//     {
//         if (data[0] == '1')
//         {
//             for (i = 1; i < divlen; i++)
//                 data[i] = ((data[i] == div[i]) ? '0' : '1');
//         }

//         for (i = 0; i < divlen - 1; i++)
//             data[i] = data[i + 1];

//         data[i] = total[j++];
//     }
// }

