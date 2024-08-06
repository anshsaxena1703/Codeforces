#include <iostream>
using namespace std;

void solve() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int ans = 0;

    // Consider all 4 possible ways to flip the cards in two rounds
    // 1. (a1 vs b1, a2 vs b2)
    if ((a1 > b1 && a2 > b2) || 
        (a1 > b1 && a2 == b2) || 
        (a1 == b1 && a2 > b2)) {
        ans++;
    }

    // 2. (a1 vs b2, a2 vs b1)
    if ((a1 > b2 && a2 > b1) || 
        (a1 > b2 && a2 == b1) || 
        (a1 == b2 && a2 > b1)) {
        ans++;
    }

    // 3. (a2 vs b1, a1 vs b2)
    if ((a2 > b1 && a1 > b2) || 
        (a2 > b1 && a1 == b2) || 
        (a2 == b1 && a1 > b2)) {
        ans++;
    }

    // 4. (a2 vs b2, a1 vs b1)
    if ((a2 > b2 && a1 > b1) || 
        (a2 > b2 && a1 == b1) || 
        (a2 == b2 && a1 > b1)) {
        ans++;
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
