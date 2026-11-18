#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for(auto &i : v) cin >> i;

    vector<ll> pre_sum(n+1);
    for (int i = 1; i <= n; i++)
    {
        pre_sum[i] = pre_sum[i-1]+v[i-1];
    }
    
    ll ans = 0;
    map<ll, ll> mp;
    mp[0] = 1;

    for (int r = 1; r <= n; r++)
    {
        ll y = pre_sum[r]-x;
        ans += mp[y];
        mp[pre_sum[r]]++;
    }
    cout << ans << endl;
    
    return 0;
}
