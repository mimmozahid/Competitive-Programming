#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 998244353;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

ll fun1 (ll p)
{
    return p + (1LL << (p+1)); 
}

ll fun2 (ll p)
{
    return (1LL << p)-1;
}

ll f (ll x)
{
    if (x <= 0)
        return 0;

    ll p = 1;
    while (fun2(p+1) <= x) p++;

    ll a = fun1 (p) + f (x-fun2(p));
    ll b = fun1 (p+1);

    return min (a, b);
}

void solve (int tc)
{
    ll l, r;
    cin >> l >> r;

    ll total = 0;

    for (ll x = l; x <= r; x++)
    {
        if (x <= 1)
        {
            total = (total+x)%MOD;
            continue;
        }
        ll val = (f(x/2) % MOD - x%MOD + MOD)%MOD;
        total = (total+val)%MOD;
    }
    cout << total << endl;
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

