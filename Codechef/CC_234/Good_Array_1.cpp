#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int solve(int l, int r, const vector<int>& a, vector<vector<int>>& dp, int n) 
{
    if (l >= r) 
        return 0;
    
    if (dp[l][r] != -1) 
        return dp[l][r];

    vector<int> freq(n + 1, 0);
    for (int i = l; i <= r; ++i) 
        freq[a[i]]++;

    int min_changes = INF;

    for (int i = l; i <= r; ++i) 
    {
        min_changes = min(min_changes, 1 + solve(l, i - 1, a, dp, n) + solve(i + 1, r, a, dp, n));
        
        if (freq[a[i]] == 1)
        {
            min_changes = min(min_changes, solve(l, i - 1, a, dp, n) + solve(i + 1, r, a, dp, n));
        }
    }
    
    return dp[l][r] = min_changes;
}

void run_test_case() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<vector<int>> dp(n, vector<int>(n, -1));
    
    cout << solve(0, n - 1, a, dp, n) << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        run_test_case();
    }
    
    return 0;
}