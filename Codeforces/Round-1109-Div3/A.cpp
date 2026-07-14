#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        int output = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {

            if (s[i] == '#') {
                count++;
            }
            else {
                output = max(output, (count + 1) / 2);
                count = 0;
            }
        }

        output = max(output, (count + 1) / 2);

        cout << output <<endl;
    }

    return 0;
}