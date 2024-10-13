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

void Din() {
    int n;
    cin >> n;

    vector<int> v(n);
    ll sum = 0;
    for (auto &x : v) {
        cin >> x;
        x %= 2;
        sum += x;
    }

    debug(v);
    cout << (sum & 1 ? "YES\n" : "NO\n");
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i) { // Kickstart
        // cout << "Case #" << i << ": ";
        Din();
    }
    return 0;
}
