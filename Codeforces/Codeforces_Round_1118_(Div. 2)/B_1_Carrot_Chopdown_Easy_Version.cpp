#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
#define MOD 998244353
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 



void solve ()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n), frq(m+2);
    for (auto &x : v)
    {
        cin >> x;
        frq[x]++;
    }

    vector<int> suf (m + 2);
    for (int i = m; i >= 1; i--)
    {
        suf[i] = suf[i+1] + frq[i+1];
    }
    
    int ans = 0;
    for (int x = 1; x <= m; x++)
    {
        int val = frq[x] + suf[x];
        if (x*2 <= m) val += frq[x*2];
        ans = max (ans, val);
    }
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

