#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 



void solve (int tc)
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    
    int ans = INT_MAX;

    auto ok = [&](int i, int j)
    {
        for (int x = 1; x <= n; x++)
        {
            bool l1 = abs (i-x) <= k;
            bool l2 = abs (j-x) <= k;

            if (l1 == false && l2 == false)
            {
                return false;
            }
        }
        return true;
    };

    for (int i = 1; i <= n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            if (ok(i, j))
            {
                ans = min (ans, v[i]+v[j]);
            }
        }
        
    }
    
    if (ans == INT_MAX)
        cout << -1 << endl;
    else
        cout << ans << endl;
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

