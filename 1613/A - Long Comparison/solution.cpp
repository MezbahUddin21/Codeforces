#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <random>
#include <chrono>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
 
#define _ << " " <<
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sp(n) fixed << setprecision(n)
#define ff first
#define ss second
#define pb push_back
 
using namespace std;
//using namespace __gnu_pbds;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
//using ordered_set = tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>;
//using ordered_multiset = tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>;
 
const int mod = 1e9 + 7;
const double eps = 1e-8;
const int INF = 1e9;
const int MAX_LEN = 1e6;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
    //freopen("output_false.txt", "w", stdout); //outs
#endif
    int tt;
    cin >> tt;
    while (tt--) {
        int x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;
        if (x1 == x2 && p1 == p2) {
            cout << "=
";
            continue;
        }
        string x = to_string(x1);
        string y = to_string(x2);
        if (x.size() + p1 > y.size() + p2) {
            cout << ">
";
            continue;
        }
        if (x.size() + p1 < y.size() + p2) {
            cout << "<
";
            continue;
        }
 
        while (x.size() < y.size()) x.push_back('0');
        while (x.size() > y.size()) y.push_back('0');
        bool ok = false;
        for (int i = 0; i < x.size(); i++) {
            if (x[i] > y[i]) {
                cout << ">
";
                ok = true;
                break;
            }
            if (x[i] < y[i]) {
                cout << "<
";
                ok = true;
                break;
            }
        }
        if (!ok) {
            cout << "=
";
        }
    }
    return 0;
}