#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

ll val (ll i, vector<ll> &v)
{
    return v[i] + v[i+2] - v[i+4];
}

void solve (int tc)
{
    int n; cin >> n;
    vector<ll> v(n+1);
    for (int i = 1;i <= n; i++) cin >> v[i];

    map<ll, ll> mp;
    ll ans = 0;

    for (int i = n - 4; i >= 1; i--)
    {
        if (i + 2 + 4 <= n)
        {
            mp[val(i+2, v)]--;
        }
        if (i+4+4 <= n)
        {
            mp[val(i+4, v)]--;
        }
        
        ans += mp[val(i, v)];
        mp[val(i, v)]++;

        if (i + 2 + 4 <= n)
        {
            mp[val(i+2, v)]++;
        }
        if (i+4+4 <= n)
        {
            mp[val(i+4, v)]++;
        }
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

