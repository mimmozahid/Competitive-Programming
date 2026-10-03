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
    int n;
    cin >> n;
    vector<ll> v(n+1), pre_sum(n+1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort (v.rbegin(), v.rend());
    
    for (int i = 1; i <= n; i++)
    {
        pre_sum[i] = v[i-1]+pre_sum[i-1];
    }
    ll cnt_r = 0, cnt_b = 0, sum_r = 0, sum_b = 0, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cnt_r = i;
        cnt_b = n-i;
        sum_r = pre_sum[i];
        sum_b = pre_sum[n]-pre_sum[i];

        ll cur = 1LL *  cnt_b*sum_r + cnt_r*sum_b;
        ans = max (cur, ans);
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

