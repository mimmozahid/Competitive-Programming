#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;

    if (k < n || k > 2*n - 1)
    {
        cout << -1 << "\n";
        return;
    }

    int m = 2*n - k;
    int s = m - 1;
    vector<vector<int>> mat(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        int c = min (i, s);
        mat[i][c] = i+1;
    }
    
    int nx = n+1;
    for (int i = s+1; i <= n-1; i++)
    {
        mat[0][i] = nx++;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 0)
            {
                mat[i][j] = nx++;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}