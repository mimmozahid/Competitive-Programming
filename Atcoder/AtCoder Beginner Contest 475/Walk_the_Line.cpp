#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
#define MOD 998244353
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, s, l;
    cin >> n >> s >> l;
    
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    vector<ll> prefix (n+1, 0);
    for (int i = 1; i < n; i++)
    {
        prefix[i+1] = prefix[i] + v[i-1];
    }

    ll ans = 0;

    for (int i = 1; i <= s; i++)
    {
        for (int j = s; j <= n; j++)
        {
            ll lft = prefix[s]-prefix[i];
            ll rgt = prefix[j]-prefix[s];

            ll cst = lft + rgt + min (lft, rgt);

            if (cst <= l) ans = max (ans, ll(j-i+1));
        }
        
    }
    
    cout << ans << endl;
    
    return 0;
}