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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n+1);
    for (int i = 1; i <= n; i++) cin >> v[i];

    ll ans = 0;

    vector <ll> a = {-1};

    for (int i = 1; i <= n; i++)
    {
        if (i >= k && i <= n-k+1)
            ans += v[i];
        else
            a.push_back (v[i]);        
    }
    
    int m = a.size() - 1;
    k = min (k, m-k+1);

    for (int i = 1; i <= k; i++)
        ans += max (a[i], a[m-i+1]);

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

