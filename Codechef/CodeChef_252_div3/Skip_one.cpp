#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

void solve ()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> v(n);
    for (auto &x : v) cin >> x;
    
    ll ans = 0;
    ll sum = 0, coupon = 0;

    for (auto x : v)
    {
        sum += x;
        coupon = max (x, coupon);

        if (sum - coupon <= c)
            ans++;
        else
            break;
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
