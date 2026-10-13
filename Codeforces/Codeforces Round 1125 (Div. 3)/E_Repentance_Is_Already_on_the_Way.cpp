#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

const int mxN = 2e5+9;

void solve (int tc)
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    vector<int> dp(n);
    int cur = 1+(a[n-1] == b[n-1]);
    dp[n-1] = cur;

    for (int i = n-2; i >= 0; i--)
    {
        cur += 1 + (a[i] == b[i+1]);
        cur += 1 + (b[i] == a[i+1]);

        dp[i] = max (cur, dp[i+1] + 1+(a[i] == b[i]) + 1+(a[i+1] == b[i]));
    }
    
    cout << dp[0] << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve (i);

    return 0;
}

