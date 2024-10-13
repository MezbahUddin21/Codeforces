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
    string s;
    cin >> s;

    int n = s.size(), ok = 0, one = 0;
    for (int i = 0; i < n; ++i) {
        one += (s[i] == '1');
        if (s[i] > '1') {
            ok = 1;
            break;
        }
    }

    // string ans = "1";
    string ans(n, '0');
    ans = '1' + ans;

    cout << ((ok || one > 1) ? ans : "-1") << '\n';
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
