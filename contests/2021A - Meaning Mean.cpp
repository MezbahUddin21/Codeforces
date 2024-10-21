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

#define GET_MACRO(_1, _2, _3, NAME, ...) NAME
#define rep(...) GET_MACRO(__VA_ARGS__, rep2, rep1)(__VA_ARGS__)
#define rep1(i, n) for(int i = 0; i < int(n); ++i)
#define rep2(i, a, n) for(int i = int(a); i <= int(n); ++i)
#define sz(x) int(x.size())

void Din() {
    int n;
    cin >> n;

    multiset<int> st;
    rep(i, n) {
        int x;
        cin >> x;
        st.insert(x);
    }

    debug(st);
    while (sz(st) > 1) {
        auto x = st.begin();
        st.erase(x);
        auto y = st.begin();
        st.erase(y);
        
        st.insert((*x + *y) / 2);
    }

    cout << *st.begin() << "\n";
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
