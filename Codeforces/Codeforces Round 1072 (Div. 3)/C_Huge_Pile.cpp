#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

const int inf = 1e9;
int n, k;
map<int, int> dp;

int f (int n)
{
    if (n == k)
        return 0;

    if (n < k) 
        return inf;

    if (dp.count(n))
        return dp[n];

    int ans = inf;

    int up = (n+1)/2;
    int lo = n/2;

    ans = min(ans, 1+f(lo));
    ans = min(ans, 1+f(up));
    return dp[n] = ans;
}

void solve ()
{
    cin >> n >> k;
    dp.clear ();
    
    int ans = f (n);

    if (ans >= inf)
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
    while (t--)
        solve ();

    return 0;
}

