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
    string s, t;
    cin >> s >> t;

    int n = s.size(), m = t.size(), j = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '?') {
            if (j < m && s[i] != t[j]) {
                s[i] = t[j];
                // j += 1;
            }
        }
        if (s[i] == t[j]) {
            j += 1;
        }
        // debug(t[i]);
    }
    for (auto &x : s) {
        if (x == '?')
            x = 'd';
    }

    // debug(s);
    
    if (j == m) {
        cout << "Yes\n" << s << '\n';
    }
    else
        cout << "No\n";

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
