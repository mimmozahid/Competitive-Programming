#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

const int inf = INT_MAX;

void solve (int tc)
{
    int n;
    cin >> n;
    vector<int> v(n+2), p_sum(n+2);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        p_sum[i] = p_sum[i-1]+v[i];
    }

    vector<int> sf_mn (n+2, inf);
    for (int i = n; i >= 1; i--)
    {
        sf_mn[i] = min (sf_mn[i+1], p_sum[i]);
    }
    
    if (sf_mn[1] >= 0)
    {
        cout << "YES" << endl;
        return;
    }

    bool flg = true;

    for (int i = 1; i <= n; i++)
    {
        bool ok = (sf_mn[i+1]-v[i]) >= 0;

        if (ok && flg)
        {
            cout << "YES" << endl;
            return;
        }
        if (p_sum[i] < 0) flg = false;
    }

    cout << "NO" << endl;
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

