#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 



ll f (ll x)
{
    int sum = 0;
    while (x > 0)
    {
        int a = x%10;
        sum += a*a;
        x /= 10;
    }
    return sum;
}



void solve (int tc)
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    map <ll, ll> dp;
    int t = 220;

    for (auto x : a)
    {
        ll val = x;
        for (int i = 0; i < t; i++)
        {
            val = f (val);
        }
        dp[val]++;
    }

    ll ans = 0;
    for (auto [val, cnt] : dp)
    {
        ans += cnt*(cnt-1)/2;
    }

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

