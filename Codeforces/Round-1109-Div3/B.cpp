#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool okay = true;
        long long prev = 0;

        for (int i = 0; i < n - 1; i++) {

            if (a[i] <= prev) {
                okay = false;
                break;
            }

            long long target = prev + 1;
            long long move = a[i] - target;

            a[i] = target;
            a[i + 1] += move;

            prev = a[i];
        }

        if (okay && a[n - 1] > prev)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}