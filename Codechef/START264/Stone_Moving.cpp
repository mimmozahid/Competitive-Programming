#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 



void solve ()
{
    ll n;
    cin >> n;
    vector<ll> v(n+5), dif(n+5, 0);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
        
    ll ans = 0, a = 0;
    
    for (int i = 1; i <=n; i++)
    {
        a += dif[i];
        ll cur = a+v[i];
        ll x = min (cur, 1LL*(n-i));
        ans += x;
        if (x > 0)
        {
            dif[i+1]++, dif[i+1+x]--;
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

