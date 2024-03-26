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
    int p[n+1],a[n+1],b[n+1];
    for1(i,n)cin>>p[i];
    for1(i,n)cin>>a[i];
    for1(i,n)cin>>b[i];

    priority_queue<int,vector<int>,greater<int>>q[5][5];
    for1(i,n)q[a[i]][b[i]].push(p[i]);

    int m; cin>>m;
    while(m--){
        int k; cin>>k;
        int ans=INT_MAX,f,s;
        for(int i=1; i<=3; i++){
            if(!q[k][i].empty() and q[k][i].top()<ans){
                ans=q[k][i].top();
                f=k,s=i;
            }
        }
        for(int i=1; i<=3; i++){
            if(!q[i][k].empty() and q[i][k].top()<ans){
                ans=q[i][k].top();
                f=i,s=k;
            }
        }
        if(ans==INT_MAX)ans=-1;
        else q[f][s].pop();
        cout<<ans<<" ";
    }cout<<endl;

}
 
int main() {
    mezbah();
    // int t;
    // cin>>t;
    
    // while(t--){
        mine();
    // }
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

