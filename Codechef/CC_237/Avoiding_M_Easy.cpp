#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) 
    {
        int N, M;
        cin >> N >> M;

        vector<long long> dp(M, 0), new_dp(M, 0);

        dp[0] = 1;

        for (int i = 0; i < N; i++) 
        {
            for (int j = 0; j < M; j++) new_dp[j] = 0;

            for (int k = 0; k < M; k++) 
            {
                long long ways = dp[k];
                if (ways == 0) continue;

                new_dp[0] = (new_dp[0] + ways) % MOD;

                new_dp[k] = (new_dp[k] + ways * (N - M)) % MOD;

                new_dp[k] = (new_dp[k] + ways * k) % MOD;

                if (k < M - 1) {
                    new_dp[k + 1] = (new_dp[k + 1] + ways * (M - k)) % MOD;
                }
            }

            dp = new_dp;
        }

        long long answer = 0;
        for (int k = 0; k < M; k++) 
        {
            answer = (answer + dp[k]) % MOD;
        }

        cout << answer << "\n";
    }

    return 0;
}