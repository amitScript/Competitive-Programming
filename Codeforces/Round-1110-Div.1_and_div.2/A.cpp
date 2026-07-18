#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {

        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int ans = INF;

        
        for (int T = 0; T <= n; T++) {

            vector<vector<int>> dp(n + 1, vector<int>(T + 2, INF));
            dp[0][0] = 0;

            for (int i = 0; i < n; i++) {

                for (int r = 0; r <= T; r++) {

                    if (dp[i][r] == INF) continue;

                  
                    if (r >= k) {
                        int cost = (s[i] == 'L' ? 0 : 1);
                        dp[i + 1][r] =
                            min(dp[i + 1][r], dp[i][r] + cost);
                    }

                   
                    if (r < T) {

                        int suffixL =
                            (n - i - 1) - (T - r - 1);

                        if (suffixL >= k) {

                            int cost = (s[i] == 'R' ? 0 : 1);

                            dp[i + 1][r + 1] =
                                min(dp[i + 1][r + 1],
                                    dp[i][r] + cost);
                        }
                    }
                }
            }

            ans = min(ans, dp[n][T]);
        }

        if (ans == INF)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }
}