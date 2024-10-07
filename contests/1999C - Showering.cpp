/* GREEN UNIVERSITY OF BANGLADESH
    Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;

// Debug..
#ifdef LOCAL
#include "debug.h"
#else
#define debug(x...)
#endif

#define ll long long
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second

void Din() {
    int n, s, m;
    cin >> n >> s >> m;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].ff >> v[i].ss;
    }
    
    bool ok = (v[0].ff >= s);
    for (int i = 1; i < n; ++i) {
        ok |= ((v[i].ff - v[i - 1].ss) >= s);
    }
    ok |= (m - v[n - 1].ss >= s);
    cout << (ok ? "Yes\n" : "No\n");
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) Din();
    // for (int i = 1; i <= t; ++i) { // Kickstart
    //     cout << "Case #" << i << ": "; Din();
    // }
    return 0;
}
