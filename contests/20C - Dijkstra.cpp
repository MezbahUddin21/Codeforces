#include <bits/stdc++.h>
using namespace std;

int n,m;
map<int,vector<pair<int,int>>>g;
priority_queue<int>s;

long long node[100005],d[100005];

void path(int n){
    if(n!=1)
        path(node[n]);
    cout<<n<<" ";
}


#define lll 1e18



 
int main() {
//     ios::sync_with_stdio(0),cin.tie(0); cout.tie(0);
//     int t=1;
//     // cin>>t;

// //    int c=1;
//     while(t--){
//         // cout<<"Case "<<c<<": "; c++;
//         mine();
//     }

    cin>>n>>m;
    int u,v,w;
    while(m--){
        cin>>u>>v>>w;
    	g[u].push_back(make_pair(v,w));
        g[v].push_back(make_pair(u,w));
    }
    s.push(1);
    for(int i=1;i<=n;i++){
    	d[i] = lll;
        node[i] = i;
    }
 
    d[1] = 0;
    while(!s.empty()){
    	u = s.top();
        s.pop();
 
    	for(int i=0;i<g[u].size();i++){
    		v = g[u][i].first;
            w = g[u][i].second;
 
    		if(d[u] + w < d[v]){
    			d[v] = d[u] + w;
                s.push(v);
    			node[v] = u;
    		}
        }
    }
    if(d[n]==lll)
     cout<<-1<<" ";
    else path(n);

}


