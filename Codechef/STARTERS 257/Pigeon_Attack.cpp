#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

const int mxN = 200;

void solve (int tc)
{
    int n, k;
    cin >> n >> k;

    int cnt = 0, p = 0, q = k;
    for (int i = 1; i <= mxN; i++)
    {
        if (i != q) p++;
        if (i == q)
        {
            cnt++;
            q += k;
            // cout << k << endl;
        }
        if (p == n) break;
    }
    
    int ans = cnt + n;
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

