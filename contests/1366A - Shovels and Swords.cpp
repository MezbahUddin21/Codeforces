#include <bits/stdc++.h>
using namespace std;

void Din() {
    int a, b;
    cin >> a >> b;

    if(a*2 <= b || b*2 <= a) {
        cout << min(a, b) << '\n';
    }
    else {
        int ans = abs(a - b);

        int min_a = min(a, b);
        int min_b = max(a, b);
    

        min_a-=ans;

        min_b-=2*ans;


        ans+=min_a/3 *2;

        if(min_a % 3 == 2) 
            ans += 1;

        // int ans = abs(a - b);
        // if(a < b) {
        //     swap(a, b);
        // }
        // if(ans & 1) ans += 1;
        // a -= ans;
        // b -= (ans / 2);
        // ans /= 2;
        // ans += (b/3) * 2;

        cout << ans << '\n';

    }

}

int main() {
    int t = 1;
    cin >> t;
    for(int i = 1;i <= t; ++i) {
        Din();
    }
    return 0;
}
