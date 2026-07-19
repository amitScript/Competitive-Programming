#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long n, k, m;
        cin >> n >> k >> m;

        if (m < k) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        for (long long i = 1; i <= n; i++) {
            if (i % k == 0)
                cout << (m - k + 1);
            else
                cout << 1;

            if (i != n) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}