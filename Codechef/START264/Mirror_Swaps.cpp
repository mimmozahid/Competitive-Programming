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
    int n; cin >> n;
    vector<ll> v(n);
    for (auto &x : v) cin >> x;

    int m = n/2;
    ll ans = 0, swp = 0;
    ll cnt = 0, len = 1, pos = 0;

    for (int i = 0; i < m-1; i++)
    {
        ll same = abs (v[i] - v[i+1]) + abs (v[n-1-i] - v[n-2-i]);
        ll dif = abs (v[i] - v[n-2-i]) + abs (v[n-i-1] - v[i+1]);

        ans += max (same, dif);

        if (same == dif)
        {
            swp += min (cnt, len-cnt);
            cnt = 0, len = 1, pos = 0;
        }
        else
        {
            pos ^= (dif > same);
            len++, cnt += pos;
        }
    }
    
    swp += min (cnt, len-cnt);

    if (n%2 == 0) 
        ans += abs (v[m-1] - v[m]);
    else
        ans += abs (v[m-1] - v[m]) + abs (v[m] - v[m+1]);

    cout << ans << " " << swp << endl;
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

